#include "main.h"

/**
 * print_binary - print no. in base 2
 * @ls: parameter
 *
 * Return: Length
 */
int print_binary(va_list ls)
{
	char *prt_buff;
	int sz;

	prt_buff = int_asc(va_arg(ls, unsigned int), 2);

	sz = print(prt_buff);

	return (sz);
}
