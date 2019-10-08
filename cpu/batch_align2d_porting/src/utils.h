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


#endif /* UTILS_H_ */
