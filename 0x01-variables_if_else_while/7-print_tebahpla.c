#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints alphabet in reversed order
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char c;
		for (c = 'z'; c >= 'a'; c--)
		{
			putchar(c);
		}
		putchar('\n');
		return (0);
}
