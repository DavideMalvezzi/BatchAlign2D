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

#endif /* UTILS_H_ */
