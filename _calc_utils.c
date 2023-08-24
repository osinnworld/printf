#include "main.h"

/**
 * _strlen - calc length of strg
 * @str: parameter
 *
 * Return: length
 *
 */
int _strlen(const char *str)
{
	int i;

	for (i = 0; str[i] != 0; i++)
		;
	return (i);
}

/**
 * print - print char
 * @str: parameter
 *
 * Return: length
 */
int print(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
		_putchar(str[i]);
	return (i);
}
