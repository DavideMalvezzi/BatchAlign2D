
#include "align2d.h"

// Compute the Hessian matrix from the Jacobian vectors
// using the new formulation. H = sum JJ^T with J=(dx, dy, 1)
// so the Hessian can be expressed as H = sum [[dx^2, dxdy, dx], [dxdy, dy^2, dy], [dx, dy, 1]]
void compute_hessian(Matrix3f H, float* dx, float* dy, int N){
	for(int i = 0; i < N; i++){
		//#pragma HLS DATAFLOW
		H[0] += dx[i] * dx[i];
		H[1] += dx[i] * dy[i];
		H[2] += dx[i];
		H[4] += dy[i] * dy[i];
		H[5] += dy[i];
	}

	H[3] = H[1];
	H[6] = H[2];
	H[7] = H[5];
	H[8] = N;
}

// Compute the invese of the Hessian matrix with the minors cofactors method
void compute_inverse(Matrix3f inv, Matrix3f m){
	float det = m[0] * m[4] * m[8] +
				m[1] * m[5] * m[6] +
				m[2] * m[3] * m[7] -
				m[2] * m[4] * m[6] -
				m[1] * m[3] * m[8] -
				m[0] * m[5] * m[7];

	inv[0]= (m[4] * m[8] - m[5] * m[7]) / det;
	inv[1]= -(m[3] * m[8] - m[5] * m[6]) / det;
	inv[2]= (m[3] * m[7] - m[4] * m[6]) / det;

	inv[3]= -(m[1] * m[8] - m[2] * m[7]) / det;
	inv[4]= (m[0] * m[8] - m[2] * m[6]) / det;
	inv[5]= -(m[0] * m[7] - m[1] * m[6]) / det;

	inv[6]= (m[1] * m[5] - m[2] * m[4]) / det;
	inv[7]= -(m[0] * m[5] - m[2] * m[3]) / det;
	inv[8]= (m[0] * m[4] - m[1] * m[3]) / det;
}

// Simple matrix multiplication between 3x3 matrix and 3x1 vector
void matrix_vector_mul(Matrix3f m, Vector3f v, Vector3f res){
	for(int i = 0; i < 3; i++){
		res[i] = 0;
		for(int j = 0; j < 3; j++){
			res[i] += m[i * 3 + j] * v[j];
		}
	}
}

// Read write test for axi master protocol
void batch_align2D(
			volatile Vector2f* cur_px_estimate,
			volatile bool* converged
){
	// Define m_axi ports
	// For better performance set the latency and read/write parameter
	#pragma HLS INTERFACE m_axi depth=1 port=cur_px_estimate offset=slave
	#pragma HLS INTERFACE m_axi depth=1 port=converged offset=slave
	// Define control signals
	#pragma HLS INTERFACE s_axilite port=return bundle=ctrl

	// Temp buffer
	Vector2f v_buff[BATCH_SIZE];
	bool c_buff[BATCH_SIZE];

	// Burst copy data from RAM to FPGA
	memcpy(v_buff, (const Vector2f*)cur_px_estimate, sizeof(Vector2f) * BATCH_SIZE);
	memcpy(c_buff, (const bool*)converged, sizeof(bool) * BATCH_SIZE);

	// Elaboration
	for(int i = 0; i < BATCH_SIZE; i++){
		v_buff[i][0] *=2;
		v_buff[i][1] *=2;
		c_buff[i] = !c_buff[i];
	}

	// Burst copy data from FPGA to RAM
	memcpy((Vector2f*)cur_px_estimate, v_buff, sizeof(Vector2f) * BATCH_SIZE);
	memcpy((bool*)converged, c_buff, sizeof(bool) * BATCH_SIZE);

	return;
}

