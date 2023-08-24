#include "main.h"

/**
 * print_hexadec_upp - print a number in hexadecimal
 * @ls: no. to print
 *
 * Return: length
 */

int print_hexadec_upp(va_list ls)
{
	char *pt;
	int i;

	pt = int_asc(va_arg(ls, unsigned int), 16);
	pt = string_to_upper(pt);

	i = print((pt != NULL) ? pt : "NULL");

	return (i);
}

/**
 * is_lowercase - check if the characters are in lowercase
 * @c: character
 *
 * Return: 1 or 0
 */

int is_lowercase(char c)
{
	return (c >= 'a' && c <= 'z');
}

/**
 * string_to_upper - converts string to uppercase
 * @s: parameter
 *
 * Return: uppercase strg
 */

char *string_to_upper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (is_lowercase(s[i]))
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
