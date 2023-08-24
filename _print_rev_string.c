#include "main.h"

/**
 * print_rev_string - outputsa string in reverse
 * @ls: parameter
 *
 * Return: length
 */

int print_rev_string(va_list ls)
{
	const char *strg;
	int i, sz;

	strg = va_arg(ls, const char *);

	sz = _strlen(strg);

	for (i = sz - 1; i >= 0; i--)
		_putchar(strg[i]);

	return (sz);
}
