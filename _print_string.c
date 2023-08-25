#include "main.h"
/**
 * print_string - print string
 * @ls: parameter
 *
 * Return: length
 */

int print_string(va_list ls)
{
	char *p;
	int p_len = 0;
	int str_len;
	char *fmt_str;

	p = va_arg(ls, char*);

	if (p == NULL)
	{
		p = "(null)";
	}

	str_len = _strlen(p);

	fmt_str = malloc(str_len + 1);

	if (fmt_str == NULL)
	{
		return (0);
	}

	strcpy(fmt_str, p);
	p_len = print(fmt_str);

	free(fmt_str);

	return (p_len);
}
