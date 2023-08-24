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
	int i;

	pt = int_asc(va_arg(ls, int), 10);

	i = print((pt != NULL) ? pt : "NULL");

	return (i);
}
