#include "main.h"

/**
 * print_pointer - prints no. to hexadecimal
 * @ls: parameter
 *
 * Return: length
 */
int _strgcmp(char *, char *);
int print_pointer(va_list ls)
{
	int j;
	char *pt;

	pt = int_asc(va_arg(ls, unsigned long int), 16);

	if (!_strgcmp(pt, "0"))
		return (print("(nil)"));

	j = print("0x");

	if (!_strgcmp(pt, "-1"))
		j += print(" ");
	else
		j += print(pt);

	return (j);
}

/**
 * _strcmp - compare 2 strgs
 * @s1: strg 1
 * @s2: strg 2
 *
 * Return: int
 */
int _strgcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
	}

	return (0);
}
