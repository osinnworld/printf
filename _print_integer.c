#include "main.h"

/**
 * print_integer - print number
 * @ls: parameter
 *
 * Return: length
 */
int print_integer(va_list ls)
{
	char *prt_buff;
	int sz;

	prt_buff = int_asc(va_arg(ls, int), 10);

	sz = print((prt_buff != NULL) ? prt_buff : "NULL");

	return (sz);
}
