#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints combination of single numbers
 * Return: 0
 */
int main(void)
{
	int c;
		for (c = '0'; c <= '9'; c++)
		{
			putchar(c);
			if (c != '9')
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
		return (0);
}
