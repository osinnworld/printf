#include "main.h"

/**
 * print_unsigned - print unsigned int
 * @ls: parameter
 *
 * Return: length
 */

int print_unsigned(va_list ls)
{
	char *prt_buff;
	int sz;

	prt_buff = int_asc(va_arg(ls, unsigned int), 10);

	sz = print((prt_buff != NULL) ? prt_buff : "NULL");

	return (sz);
}
