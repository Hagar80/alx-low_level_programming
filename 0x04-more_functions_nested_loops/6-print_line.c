#include "main.h"

/**
 * print_line - print a stright line
 *
 * @n: is the number of times the _ character
 *	should be printed
 */

void print_line(int n)
{
	int lnChr;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (lnChr = 1; lnChr <= n; inChr++)
			_putchar('_');
		_putchar('\n');
	}
}
