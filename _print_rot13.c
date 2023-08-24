#include "main.h"

/**
 * rot13 - encodes a strg
 * @s: parameter
 *
 * Return: strg
 */
int rot13(char *s)
{
	char *nm, *rot13;
	int j, i;

	rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	nm = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (i = 0; s[i] != '\0'; j++)
	{
		for (j = 0; nm[j] != '\0'; j++)
		{
			if (s[i] == nm[j])
			{
				_putchar(rot13[j]);
				break;
			}
		}
		if (!nm[j])
			_putchar(s[i]);
	}
	return (i);
}

/**
 * print_rot - rot13'ed string
 * @ls: parameter
 *
 * Return: length
 */
int print_rot(va_list ls)
{
	int i;
	char *pt;

	pt = va_arg(ls, char *);
	i = rot13((pt != NULL) ? pt : "(nehy)");

	return (i);
}

