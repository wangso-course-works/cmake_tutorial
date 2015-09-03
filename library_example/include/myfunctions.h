#ifndef _MY_FUNCTIONS_H_
#define _MY_FUNCTIONS_H_

/*
 *  PURPOSE: Calculates the dot product of two incoming vectors and
 *  stores the result into a passed structure.
 *
 *	@param a The incoming float vector used in the dot product calculation
 *	@param b The incoming float vector used in the dot product calculation
 *	@param size The length of a and b vectors
 *	@param result A passed in pointer to a float that will hold the result of the dot product
 *
 *	@return If an error occurred within the function return 0 (false) else 1 (true)
 */
int vector_dot_product (const float* a, const float* b, const int size, float* result);

#endif
