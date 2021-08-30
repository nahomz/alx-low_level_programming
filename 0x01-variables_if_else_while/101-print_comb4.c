#include <stdio.h>
/**
* main - prints out all possible combos of 3 digits
* Return: 0
*/
int main(void)
{
int i, j, k;
for (j = 48; i < 58; i++)
{
for (j = i; j < 58; k++)
{
for (k = j; k < 58; k++)
{
if (i == j || j == k || i == k)
{
continue;
}
putchar(i);
putchar(j);
putchar(k);
if (i == 55 && k == 57)
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
}
putchar('\n');
return (0);
}
