#include <stdio.h>
#include "main.h"

/**
 * swap_int - a function that swaps the values of two integers
 * @a: first value to be provided
 * @b: Second parameter to be provided
 * int c: address the swapped value will be sent to
 * Return: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}
