#ifndef _AFFINE_MATRIX_H_
#define _AFFINE_MATRIX_H_ 1

#include "Point.h"

typedef struct affineMatrix_t
{
	double a, b, c, d, e, f;
} affineMatrix;

point * applyAffineMatrix( affineMatrix * am, point *pin, point *pout);

#endif