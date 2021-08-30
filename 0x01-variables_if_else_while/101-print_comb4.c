#include <stdio.h>
/**
* main - prints out all possible combos of 3 digits
*
* Return: 0
*/
int main(void)
{
int i, j, k;
for (j = 48; i < 58; i++)
{
for (j = 49; j < 58; j++)
{
for (k = 50; k < 58; k++)
{
if (i > j && j > k)
{
putchar(i);
putchar(j);
putchar(k);
if (i != 55 && k != 56)
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
