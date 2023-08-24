#include "main.h"

/**
 * printf - produces output
 * @format: parameter
 *
 * Return: no. of printed chars
 */
int _printf(const char *format, ...)
{
	va_list args;
	int sz;

	if (format == NULL)
		return (-1);

	sz = _strlen(format);
	if (sz <= 0)
		return (0);

	va_start(args, format);
	sz = handler(format, args);

	_putchar(-1);
	va_end(args);

	return (sz);
}
