/*
 * datatypes.h
 *
 *  Created on: Oct 1, 2019
 *      Author: davide
 */

#ifndef DATATYPES_H_
#define DATATYPES_H_

#include <stdbool.h>
#include <inttypes.h>
#include <stdio.h>
#include <math.h>

// Sono le dimensioni dell easy machine hall
// Images max size
#define MAX_IMG_W	752
#define MAX_IMG_H	480
#define IMG_LEN	(MAX_IMG_H * MAX_IMG_W)

// Image struct
typedef struct Image{
	uint8_t data[IMG_LEN];
	int cols;
	int rows;
	int step;
}Image;

// Image pyramid struct

// Definire cosi' le SIZE da il seguente errore perche' non e' una costante
// ben definita con il cast dell'int, da sistemare
// datatypes.h:32:2: warning: variably modified ‘data’ at file scope
#define PYR_SIZE  (int)(MAX_IMG_H * MAX_IMG_W * (1 + 0.25f + 0.0625))

/*
			0.25 * 0.25
	1 x 1		 |
 ___________	 |		___ 0.0625 * 0.0625
|     |     |   \|/		|
|_____|_____|	____	|
|	  |		|  | 	|	_
|_____|_____|  |____|  |_|

	752x480		376x240		188x120

*/
typedef struct PyrImage{
	uint8_t data[PYR_SIZE];
	int cols;
	int rows;
	int step;
}PyrImage;

// Patch size
#define PATCH_SIZE	8
// Patchess
typedef uint8_t		Patch[PATCH_SIZE * PATCH_SIZE];
typedef uint8_t		PatchBorder[(PATCH_SIZE + 2) * (PATCH_SIZE + 2)];

// Regions for Gauss iterations
#define MAX_REGION_SIZE 64
/* Perchè di questo valore?
I massimi spostamenti sono questi
Livello della piramide 0:  max X 24.000, Y 21.000
Livello della piramide 1:  max X 6.000,  Y 9.000
Livello della piramide 2:  max X 6.000,  Y 12.000
Le patch normalmente sono 8x8 incentrate nella feature, quindi posso supporre
che la feature si trovi a coordinata (-4,+4) devo considerare allora una patch
per la piramide 0 di almeno queste dimensioni (-24,+24) per cui devo avere
almeno 48x48 --> scelgo 64x64 --> 4096 byte --> per le altre dimensioni
lascio la stessa quantità 64 ma definisco le vere dimensioni con cols e rows,
posso fare ad esempio 32x32 e 24x24 in cols e rows

Non ho fatto inoltre una struttura separata per i 3 per polimorfismo */

typedef struct PyrRegion{
	uint8_t data[MAX_REGION_SIZE*MAX_REGION_SIZE];
	int cols;
	int rows;
	int region_offset_x;
	int region_offset_y;
	int step; // pretty useless
}PyrRegion;

// Vectors and matrix
typedef float 	Vector2f[2];
typedef float 	Vector3f[3];
typedef float 	Matrix3f[9];

// Test
typedef struct Test{
	int test_id;							// test unique identifier

	// Input params
	int id;									// frame_id
	int level;
	PyrImage pyr;
	PatchBorder ref_patch_with_border;
	Patch ref_patch;
	int n_iter;
	Vector2f cur_px_estimate;

	// Outputs
	Matrix3f hessian;
	Matrix3f inverse_hessian;
	Vector2f final_cur_px_estimate;
	int last_iter;
	Vector3f iter_jacobians[10];
	Vector2f iter_pos[10];
	bool converged;
}Test;



#endif /* DATATYPES_H_ */
