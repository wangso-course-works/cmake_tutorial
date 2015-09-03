#include <ctype.h>
#include <string.h>
#include "helpers.h"

int isStringANumber ( const char* str) {

	// Is the passed string is NULL
	if (!str) {
		return FALSE;
	}

	const int length = strlen(str);
	int i = 0;

	/*
	 * Traverses the string validating if the current character is a digit
	 * if not returns false, else return true
	 */
	for ( ; i < length; ++i) {
		if (! isdigit(str[i])) {
			return FALSE;
		}
	}

	return TRUE;
}
