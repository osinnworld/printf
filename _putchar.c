#include "main.h"

/**
 * _putchar - print char
 * @ch: parameter
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char ch)
{
	return (buffer(c));
}

/**
 * buffer - puts char in a bufffer
 * @ch: parameter
 *
 * Return: 1
 */
int buffer(char ch)
{
	static int i;
	static char buffrg[1024]
	{
		write(1, buffrg, i);
		i = 0;
	}

	if (ch != -1)
		buffrg[i++] = ch;

	return (1);
}
