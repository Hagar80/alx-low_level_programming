#include  "main.h"

/**
 * swap_int - swap te values of two integers
 *		using two input parapeters
 *
 * @a: input parameter 1
 * @b: input parameter 2
 *
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
