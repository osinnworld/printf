#include "main.h"
#include "main.h"

/**
 * print_octal - print an unsigned octal...
 * @ls: parameter
 *
 * Return: length
 */
int print_octal(va_list ls)
{
	char *prt_buff;
	int sz;

	prt_buff = int_asc(va_arg(ls, unsigned int), 8);

	sz = print((prt_buff != NULL) ? prt_buff : "NULL");

	return (sz);
}
