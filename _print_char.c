#include "main.h"
/**
 * print_char - print char
 * @ls: parameter
 *
 * Return: 1
 */
int print_char(va_list ls)
{
	int ax;

	ax = va_arg(ls, int);
	_putchar(ax);

	return (1);
}
