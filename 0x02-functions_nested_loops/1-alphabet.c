#include "main.h"
/**
 * print_alphabet - Check description
 * Description: It prints the alphabet in lowercase fallowed by a new line
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char t;

	t = 'a';
	while (t <= 'z')
	{
		_putchar(t);
		t++;
	}
	_putchar('\n');

}
