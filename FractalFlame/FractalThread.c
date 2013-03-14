#include <Windows.h>
#include <stdint.h>
#include <stdio.h>

#include "AffineMatrix.h"

typedef struct ThreadData_t{
	affineMatrix matrixes[];
	double // histogram
} ThreadData;

DWORD WINAPI ThreadFunc(void* data){
	ThreadData *td = (ThreadData *) data;

	affineMatrix *affineMatrix = td->matrixes;

	while
	return 0;
}