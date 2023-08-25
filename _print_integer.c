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
	char sign = (num < 0) ? '-' : '+';

	pt = int_asc(num, 10);

	sz = (num >= 0) ? _putchar(sign) : 0;

	sz += print((pt != NULL) ? pt : "NULL");

	return (sz);
}
