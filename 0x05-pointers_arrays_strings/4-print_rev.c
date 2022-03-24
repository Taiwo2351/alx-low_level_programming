#include "main.h"
/**
 * print_rev - a function that prints a string, in reverse,
 * followed by a new line.
 * @s: an input string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int str_len = 0;

	while (s[str_len] != '\0')
	{
		str_len++;
	}
	for (str_len = str_len - 1; str_len >= 0; str_len--)
	{
		_putchar(s[str_len]);
	}
	_putchar('\n');
}
