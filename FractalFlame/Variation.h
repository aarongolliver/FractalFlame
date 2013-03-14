#ifndef _VARIATION_H_
#define _VARIATION_H_ 1

#include "Point.h"

#define N_VARIATIONS 4

point * v1(point * pin, point * pout);
point * v2(point * pin, point * pout);
point * v3(point * pin, point * pout);
point * v4(point * pin, point * pout);

point * (*variations[N_VARIATIONS])(point *, point *) = {v1, v2, v3, v4};

#endif