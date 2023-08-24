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
	int i;

	pt = int_asc(va_arg(ls, unsigned int), 10);

	i = print((pt != NULL) ? pt : "NULL");

	return (i);
}
