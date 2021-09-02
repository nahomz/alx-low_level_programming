#include <stdio.h>
#include "main.h"
/**
* main - print  holberton
*
* Description: just prints a statement
* Return: Always(0) Success
*/
int main(void)
{
char *c = "Holberton";
int i;
for (i = 0; i < 10; i++)
{
_putchar(c[i]);
}
_putchar('\n');
return (0);
}
