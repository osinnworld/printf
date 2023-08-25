#include "main.h"

/**
 * print_integer - print number
 * @ls: parameter
 *
 * Return: length
 */
int print_integer(va_list ls)
{
	char *pt;
	int sz;

	int num = va_arg(ls, int);
	char sign = (value < 0) ? '-' : '+';

	pt = int_asc(num, 10);

	if
	{
		sz = _putchar(sign);
	}

	sz += print((pt != NULL) ? pt : "NULL");

	return (sz);
}
