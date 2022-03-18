#include <stdio.h>
/**
* main - check the code
*
* Return: Always 0 (success)
*
*/
int main(void)
{
int i;
int n = 50;
/*declare first and second terms and next-term*/
long int t1, t2, next_term;
/*initialize the first, second and  next term (3rd term)*/
t1 = 1;
t2 = 2;
next_term = t1 + t2;
/*print the first two terms t1 and t2*/
printf("%lu, %lu, ", t1, t2);
/*print 3rd to 50th terms*/
for (i = 3; i <= n; i++)
{
printf("%lu, ", next_term);
t1 = t2;
t2 = next_term;
next_term = t1 + t2;
}
putchar ('\n');
return (0);
}
