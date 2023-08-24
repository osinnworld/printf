#include "main.h"

/**
 * print_binary - prints no. to base 2
 * @ls: parameter
 *
 * Return: length
 */
int print_binary(va_list ls)
{
	int i;
	unsigned int num = va_arg(ls, unsigned int);
	int b_len = 0;
	char b_repr[32];

	if (num == 0)
	{
		b_repr[0] = '0';
		b_repr[1] = '\0';
		_putchar('0');
		return (1);
	}

	while (num > 0)
	{
		b_repr[b_len++] = (num & 1) + '0';
		num >>= 1;
	}

	for (i = b_len - 1; i >= 0; i--)
		_putchar(b_repr[i]);

	return (b_len);
}
