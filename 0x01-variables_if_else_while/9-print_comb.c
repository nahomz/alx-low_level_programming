#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - print out all the numbers under with a ,
*
* Return: 0 (Success)
*/
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
if (i != 57)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
