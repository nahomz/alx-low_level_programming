#include "main.h"
/**
* _abs - returns 1 if n is lowercase, 0 otherwise
* @n: integer whose is to be printed
* Return: abs(n)
*/
int _abs(int n)
{
if (n >= 0)
return (n);
else
return (-1 * n);
}
/**
* print_last_digit - prints the last digit of a number
* @n: integer to be tested
* Return: lastDigit of n
*/
int print_last_digit(int n)
{
int lastDigit;
lastDigit = _abs((n % 10));
_Putchar(lastDigit + 48);
return (lastDigit);
}
