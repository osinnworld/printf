#include "main.h"
/**
 * print_string - print string
 * @ls: parameter
 *
 * Return: length
 */

int print_string(va_list ls)
{
	char *strg = va_arg(ls, char*);
	int i;

	for (i = 0; strg[i] != '\0'; i++)
	{
		if (strg[i] < 32 || strg[i] >= 127)
			_printf("\\x%02X", strg[i]);
		else
			_printf("%c", strg[i]);
	}

	
	return (i);
}
