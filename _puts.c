#include "main.h"

/**
 * _puts - prints a strg
 * @str: strg to print
 *
 * Return: no. of char printed
 */
int _puts(char *str)
{
	int len = 0;

	if (str == NULL)
	{
		str = "(null)";
	}

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len++;
	}

	return (len);
}
