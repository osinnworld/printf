#include "main.h"

/**
 * handler - fmt controller
 * @str: parameter
 * @ls: parameter
 *
 * Return: size of args
 */
int handler(const char *str, va_list ls)
{
	int i, s, ax;

	s = 0;
	for (i = 0; str[i] != 0; i++)
	{
		if (str[i] == '%')
		{
			ax = percent_handler(str, ls, &i);
			if (ax == -1)
				return (-1);

			s += ax;
			continue;
		}
		_putchar(str[i]);
		s += 1;
	}

	return (s);
}

/**
 * percent_handler - percent format
 * @str: parameter
 * @ls: parameter
 * @i: parameter
 *
 * Return: size of elements printed
 */
int percent_handler(const char *str, va_list ls, int *i)
{
	int s, j, no_fmts;
	format formats[] = {
		{'c', print_char}, {'s', print_string},
		{'o', print_octal}, {'b', print_binary},
		{'u', print_unsigned}, {'i', print_integer},
		{'d', print_integer}, {'X', print_hexadec_upp},
		{'x', print_hexadec_low}, {'p', print_pointer},
		{'R', print_rot}, {'r', print_rev_string},
	};

	*i += 1;

	if (str[*i] == '\0')
		return (-1);

	if (str[*i] == '%')
	{
		_putchar('%');
		return (1);
	}

	no_fmts = sizeof(formats) / sizeof(formats[0]);
	for (s = j = 0; j < no_fmts; j++)
	{
		if (str[*i] == formats[j].type)
		{
			s = formats[j].f(ls);
			return (s);
		}
	}

	_putchar('%'), _putchar(str[*i]);

	return (2);
}
