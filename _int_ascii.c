#include "main.h"

/**
 * int_asc - integer to ascii
 * @num: parameter
 * @base: parameter
 *
 * Return: char
 */
char *int_asc(long int num, int base)
{
	static char buffer[50];
	static char *array = "0123456789abcdef";
	char *pt;
	char sg = 0;
	unsigned long x = num;

	if (num < 0)
	{
		x = -num;
		sg = '-';
	}
	pt = &buffer[49];
	*pt = '\0';

	do	{
		*--pt = array[x % base];
		x /= base;
	} while (x != 0);

	if (sg)
		*--pt = sg;
	return (pt);
}
