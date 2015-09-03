#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include <my_functions.h> // Using custom made function from custom library

#include "../include/helpers.h"

#define INPUT_SIZE_IDX 1

int main (int argc, char *argv[]) {

	if (argc < 2 || !isStringANumber ( argv[INPUT_SIZE_IDX]) ) {
		printf("Error incorrect parameters or count, try again\n");
		return 0;
	}
	srand(time(NULL));

	const int size = atoi(argv[INPUT_SIZE_IDX]);
	/*
	 * Allocate memory for our vectors
	 */
	float* a = (float*) calloc(size, sizeof(float));
	float* b = (float*) calloc(size, sizeof(float));

	/*
	 * Populate the allocated vectors
	 */
	int i = 0;
	for (; i < size; ++i) {
		a[i] = rand() % 10;
		b[i] = rand() % 10;
	}
	/*
	 * Displaying vectors
	 */
	printf("Vector A\n");
	i = 0;
	for ( ; i < size; ++i ) {
		printf("%.2f ", a[i]);
	}
	printf("\nVector B\n");
	i = 0;
	for ( ; i < size; ++i ) {
		printf("%.2f ", b[i]);
	}
	printf("\n");

	/*
	 * Call the function from our custom library
	 */
	 float result = 0;

	if (vector_dot_product (a, b, size,&result))
		printf("The dot product of the two random vectors is: %.2f\n", result);
	else
		printf("The dot product of the two random vectors failed\n");

	return 0;
}
