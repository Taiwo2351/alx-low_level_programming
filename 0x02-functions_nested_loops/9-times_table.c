#include "main.h"

/**
* times_table - Check description
* Description: It prints 9 times table starting with 0
* Return: Nothing.
*/
void times_table(void)
{
	int i;
	int j;
	int d;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9;  j++)
		{
			d = i * j;
				if (d <= 9)
				{
					_putchar(d + '0');
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar('0' + (d / 10));
					_putchar('0' + (d % 10));
					_putchar(',');
					_putchar(' ');
				}
			}
			 _putchar('\n');
		}
}
