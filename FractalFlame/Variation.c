#include "Variation.h"
#include "Point.h"

#include <math.h>

#define INIT(in, out)				\
	const double x = in->x;		\
	const double y = in->y;		\
	const double rsq = x*x + y*y;	\
	const double r = sqrt(rsq);		\
	const double t = atan2(x, y);	\
	const double p = atan2(y, x);


point * v1(point *in, point *out){
	INIT(in, out);
	out->x = sin(x);
	out->y = cos(y);
	return out;
}

point * v2(point *in, point *out){
	INIT(in, out);
	out->x = x/rsq;
	out->y = y/rsq;
	return out;
}

point * v3(point *in, point *out){
	INIT(in, out);
	
	const double sinrsq = sin(rsq);
	const double cosrsq = cos(rsq);
	
	out->x = (x * sinrsq) - (y * cosrsq);
	out->y = (x * cosrsq) + (y * sinrsq);
	return out;
}

point * v4(point *in, point *out){
	INIT(in, out);
	
	const double sinrsq = sin(rsq);
	const double cosrsq = cos(rsq);
	
	out->x = ((x - y) * (x + y)) / r;
	out->y = 2 * x * y;

	return out;
}