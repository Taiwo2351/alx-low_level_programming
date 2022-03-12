#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: Write a program that prints all possible
 * different combinations of two digits
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function
 * (every other function (printf, puts, etc…) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 * Return: 0
 */
int main(void)
{
	int c;
	int d;
		for (c = 0; c <= 9; c++)
		{
			for (d = 0; d <= 9; d++)
			{
				if (c != d && c < d)
				{
					putchar('0' + c);
					putchar('0' + d);
					if (c + d != 17)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
		putchar('\n');
		return (0);
}
