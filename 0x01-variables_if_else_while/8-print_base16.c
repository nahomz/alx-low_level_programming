#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int i;
for (i = 48; i < 58; i++)
putchar(i);
for (i = 'a'; i <= 'f'; i++)
putchar(i);
putchar('\n');
return (0);
}
