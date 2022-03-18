#include <stdio.h>
/**
* main - check the code
*
* Return: Always 0 (success)
*
*/
int main(void)
{
int i, n;
/* initialize first and second terms*/
int t1 = 1, t2 = 2, n = 50;
/*initialize the next term (3rd term)*/
int next_term = t1 + t2;
/*print the first two terms t1 and t2*/
printf("%d, %d, ", t1, t2);
/*print 3rd to 50th terms*/
for (i = 3; i <= n; ++i)
{
printf("%d, ", nextTerm);
t1 = t2;
t2 = nextTerm;
nextTerm = t1 + t2;
}
putchar ('\n');
return (0);
}
