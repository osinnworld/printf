#include "main.h"

/**
 * print_nonprint_string - prints strg
 * @args: va_list of args
 *
 * Return: no. of char
 */
int print_nonprint_string(va_list args)
{
	int len = 0;
	char *str = va_arg(args, char *);
	int i;

	if (!str)
		return (_puts("(null)"));

	for (i = 0; str[i]; i++)
	{
		if (is_non_alpanumeric(str[i]))
		{
			len += _puts("\\x");
			char *hex = convert_hex(str[i], 0);

			if (!hex[1])
				len += _putchar('0');

			len += _puts(hex);
		}
			else
			{
				len += _putchar(str[i]);
			}
	}

	return (len);
}

/**
 * is_non_alphanumeric - checks if char is non-alphanumeric
 * @c: char to check
 *
 * Return: 1 or 0
 */
int is_non_alphanumeric(char c)
{
	return ((c > 0 && c < 32) || c >= 127);
}

/**
 * convert_hex - converts no. to hex
 * @num: parameters
 * @lower:parameter
 *
 * Return: pointer
 */
char *convert_hex(unsigned long int num, int lower)
{
	static char *hex_digits = "0123456789ABCDEF";
	static char buffer[50];
	char *pt;

	if (lower)
		hex_digits = "0123456789abcdef";

	pt = &buffer[49];
	*pt = '\0';

	do {
		*--pt = hex_digits[num % 16];
		num /= 16;
	} while (num);

	return (pt);
}


