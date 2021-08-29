#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (SUCCESS)
*/
int main(void)
{
char a = 'a';
while (a <= 'z')
{
putchar(a);
a++;
}
a = 'A';
while (a <= 'Z')
{
putchar(a);
a++;
}
putchar('\n');
return (0);
}
