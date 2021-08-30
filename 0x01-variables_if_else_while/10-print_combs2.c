#include <stdio.h>
/**
* main - prints out all the numbers between 00 and 99
*
*Return: 0
*/
int main(void)
{
int i, j;
for (i = 48; i < 58; i++)
{
for (j = 48; j < 58; j++)
{
putchar(i);
putchar(j);
if (i == 57 && j == 57)
{
break;
}
else
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
