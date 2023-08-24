#include "main.h"

/**
 * print_octal - print an unsigned octal...
 * @ls: parameter
 *
 * Return: length
 */
int print_octal(va_list ls)
{
	char *pt;
	int i;

	pt = int_asc(va_arg(ls, unsigned int), 8);

	i = print((pt != NULL) ? pt : "NULL");

	return (i);
}
