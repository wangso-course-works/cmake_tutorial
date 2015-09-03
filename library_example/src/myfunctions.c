#include "../include/myfunctions.h"

int vector_dot_product (const float* a, const float* b, const int size, float* result) {
	// Checking for incorrect parameters for this function
	if (!result || !a || !b || size < 1) {
		return 0;
	}
	/*
	 * Implementation of dot product of two vectors
	 */
	int i = 0;
	float sum = 0;
	for ( ; i < size; ++i ) {
		sum += a[i] * b[i];
	}

	*result = sum;

	return 1;
}
