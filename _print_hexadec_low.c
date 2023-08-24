#include "main.h"

/**
 * print_hexadec_low - print a no. in hexadecimal fmt
 * @ls: parameter
 *
 * Return: lenght of no.
 */
int print_hexadec_low(va_list ls)
{
	char *prt_buff;
	int sz;

	prt_buff = int_asc(va_arg(ls, unsigned int), 16);

	sz = print((prt_buff != NULL) ? prt_buff : "NULL");

	return (sz);
}
