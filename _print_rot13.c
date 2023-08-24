#include "main.h"

/**
 * rot13 - encodes a strg
 * @s: parameter
 *
 * Return: strg
 */
int rot13(char *s)
{
	char *normal, *rot13;
	int j, i;

	rot13 = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	normal = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

	for (i = 0; s[i] != '\0'; j++)
	{
		for (j = 0; normal[j] != '\0'; j++)
		{
			if (s[i] == normal[j])
			{
				_putchar(rot13[j]);
				break;
			}
		}
		if (!normal[j])
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
	int p_len;
	char *p;

	p = va_arg(ls, char *);
	p_len = rot13((p != NULL) ? p : "(nehy)");

	return (p_len);
}

