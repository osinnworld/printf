#include "main.h"

/**
 * print_binary - prints no. to base 2
 * @ls: parameter
 *
 * Return: length
 */
int print_binary(va_list ls)
{
	char *pt;
	int i;

	pt = int_asc(va_arg(ls, unsigned int), 2);

	i = print(pt);

	return (i);
}
