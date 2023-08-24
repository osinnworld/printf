#include "main.h"
/**
 * print_string - print string
 * @ls: parameter
 *
 * Return: length
 */

int print_string(va_list ls)
{
	char *p;
	int p_len;

	p = va_arg(ls, char*);
	p_len = print((p != NULL) ? p : "(null)");

	return (p_len);
}
