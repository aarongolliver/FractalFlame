#include "AffineMatrix.h"
#include "Point.h"

point * applyAffineMatrix( affineMatrix * am, point *pin, point *pout){
	double x = (am->a * pin->x) + (am->b * pin->y) + (am->c);
	double y = (am->d * pin->x) + (am->e * pin->y) + (am->f);
	pout->x = x;
	pout->y = y;
	return pout;
}