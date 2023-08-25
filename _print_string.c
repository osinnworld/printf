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
	char fmt_str[5];
	
	p = va_arg(ls, char*);
	
	if (p == NULL)
	{
		p = "(null)";
	}

	for (; *p != '\0'; p++)
	{
		if (*p < 32 || *p >= 127)
		{
			snprintf(fmt_str, sizeof(fmt_str), "\\x%02X", *p);
			p_len += print(fmt_str);
		}
		else
		{
			p_len += _putchar(*p);
		}
	}

	return (p_len);
}
