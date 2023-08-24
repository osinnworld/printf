#include "main.h"
#include <stdio.h>

int _strgcmp(char *, char *);

/**
 * print_pointer - print a number in hexadecimal
 * @ls: parameter
 *
 * Return: length
 */

int print_pointer(va_list ls)
{
	int sz;
	char *prt_buff;

	prt_buff = int_asc(va_arg(ls, unsigned long int), 16);

	if (!_strgcmp(prt_buff, "0"))
		return (print("(nil)"));
	sz = print("0x");

	if (!_strgcmp(prt_buff, "-1"))
		sz += print("no!!!!!!!!!!!!");
	else
		sz += print(prt_buff);
	return (sz);
}

/**
 * _strgcmp - compare two strings
 * @s1: String 1
 * @s2: String 2
 *
 * Return: integer
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

