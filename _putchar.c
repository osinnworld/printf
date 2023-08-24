#include "main.h"

/**
 * _putchar - print char
 * @ch: parameter
 *
 * Return: 1 on success, -1 on error
 */
int _putchar(char ch)
{
	return (buffer(ch));
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
	static char buff[1024];

	if (ch == -1 || i == 1024)
	{
		write(1, buff, i);
		i = 0;
	}

	if (ch != -1)
		buff[i++] = ch;

	return (1);
}
