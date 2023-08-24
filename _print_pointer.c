#include "main.h"
#include <stdio.h>

int print_pointer(va_list ls)
{
	int len;
	char *strg = va_arg(ls, char*);
	char *hex_strg;

	hex_strg = int_asc((unsigned long)str, 16);

	if (str == NULL)
	{
		len = print("(nil)");
	}
	else
	{
		len = print("0x");
		len += print(hex_strg);
	}

	return (len);
}
