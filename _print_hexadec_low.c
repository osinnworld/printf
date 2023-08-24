#include "main.h"

/**
 * print_hexadec_low - print a no. in hexadecimal fmt
 * @ls: parameter
 *
 * Return: lenght of no.
 */
int print_hexadec_low(va_list ls)
{
	char *pt;
	int i;

	pt = int_asc(va_arg(ls, unsigned int), 16);

	i = print((pt != NULL) ? pt : "NULL");

	return (i);
}
