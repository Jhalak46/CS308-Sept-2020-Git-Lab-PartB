#ifndef _veclib_h 
#define _veclib_h

/* Library Imports */
#include <stdio.h>

#define DIM 4
// vector type
typedef float vector[DIM];

// vector addition
float * add(vector vec_a, vector vec_b);
// elementwise product
float * eleProd(vector vec_a, vector vec_b,vector vec_c);
// difference of two vectors
float *diff(vector vec_a, vector vec_b);
// dot product
float *dotprod(vector vec_a, vector vec_b);
// angle between between two vectors
float angle(vector vec_a, vector vec_b);

#endif 
