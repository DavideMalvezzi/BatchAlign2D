/*
 * utils.h
 *
 *  Created on: Oct 1, 2019
 *      Author: davide
 */

#ifndef UTILS_H_
#define UTILS_H_

#include "datatypes.h"

void load_tests(char* filename, Test* tests, int n, int skip);
void save_img(char* filename, Image img);
void save_patch(char* filename, Patch img);
void save_patch_with_border(char* filename, PatchBorder img);

void print_matrix(Matrix3f m);
void print_vector(Vector2f a);
int matrix3f_areEqual(Matrix3f a, Matrix3f b, float tol);
int vector2f_areEqual(Vector2f a, Vector2f b, float tol);

// batch check utils
void check_correctness(Test* tests, int num_tests);
void check_max_distance(Test* tests, int num_tests);
void check_max_distance_by_levels(Test* tests, int num_tests);
void check_max_horizontal_vertical_distance_by_levels(Test* tests, int num_tests);


#define REGION_CREATION_FAILED -1
#define REGION_CREATION_SUCCEED 1
/*  create region of images out of a bigger image, given the pyramid image,
    create a region of region_rows and region_cols
    If it goes out of region then we compensate, adding the remaining part
    in a direction where region can be still expanded
     ________    ________		________
    |  ___   |  |	   	x|	   |	|  x|
    | | x |	 |	|		 | --> |	| 	|
    |__---___|	|________|	   |____----|

    NB: Non è più detto che la coordinata si trovi al centro della regione
    creata
*/
int createPyrRegion(PyrImage pyr, int pyrLevel,
        Vector2f pixel_center, int half_patch_size,
		PyrRegion *pyrRegion, int requested_region_rows, int requested_region_cols);

#define PREPARATION_FAILED -1
#define PREPARATION_SUCCEED 1
int prepareBatches(PyrRegion* batch_pyrRegion,
        Test* tests, int num_tests,
        int index_test_start, int index_test_end);

int check_correctness_pyrRegion(Test* tests, int num_tests);

#endif /* UTILS_H_ */
