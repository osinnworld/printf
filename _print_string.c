#include "main.h"
/**
 * print_string - print string
 * @ls: parameter
 *
 * Return: length
 */

int print_string(va_list ls)
{
	char *strg = va_arg(ls, char*);
	int i;

	i = print((strg != NULL) ? strg : "(null)";
	return (i);
}
