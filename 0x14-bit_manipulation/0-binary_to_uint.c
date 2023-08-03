#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_unit - converts binary numbers to unsigned int
 * @b: char string
 *
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	int slen = strlen(b);
	unsigned int total = 0;
	unsigned int decval = 1;

	if (b == NULL){
		return (0);
	}
	for (int i = (slen - 1); i >= 0; i--){
		if (b[i] != '0' && b[i] != '1'){
			return (0);
		}
	}
	for (int i = (slen -1); i >=0; i--){
		if (b[i] == '1'){
			total += decval;
		}
		decval *= 2;
	}
	return total;
}
