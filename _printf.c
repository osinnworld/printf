#include "main.h"

/**
 * _printf - produces output
 * @format: parameter
 *
 * Return: no. of printed chars
 */
int _printf(const char *format, ...)
{
	va_list args;
	int i;

	if (format == NULL)
		return (-1);

	i = _strlen(format);
	if (i <= 0)
		return (0);

	va_start(args, format);
	i = handler(format, args);

	_putchar(-1);
	va_end(args);

	return (i);
}
