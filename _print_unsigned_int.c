#include "main.h"

/**
 * print_unsigned - print unsigned int
 * @ls: parameter
 *
 * Return: length
 */

int print_unsigned(va_list ls)
{
	char *pt;
	int sz;
	unsigned int num = va_arg(ls, unsigned int);

	pt = int_asc(num, 10);
	sz = print((pt != NULL) ? pt : "NULL");

	return (sz);
}
