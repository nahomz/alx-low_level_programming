#include "main.h"

/**
*powB - raises the number base to power power
*@base : the base
*@power : the power
*Return: return the answer
*/
int powB(int base, int power)
{
int i, prod = 1;
for (i = 0; i < power; i++)
{
prod = prod *base;
}
return (prod);
}

/**
*numLength - returns the lenth of string
*@num : operand number
*Return: number of digits
*/
int numLength(int num)
{
int length = 0;
if (!num)
{
return (1);
}
while (num)
{
num = num / 10;
length += 1;
}

return (length);
}

/**
*putnchar - Print a number of any any digit
*@num : takes an input number
*
*
*/
void putnchar(int num)
{
int length = numLength(num), j = length - 1, k, tmp2, digit1;
if (num < 0)
{
_putchar('-');
num = -1 * num;
}
if (num == 0)
_putchar(48);
else
{
while (j >= 0)
{
if (num % powB(10, j) == 0 && j != 0)
{
_putchar(48 + num / powB(10, j));
for (k = j; k > 0 ; k--)
{
_putchar(48);
}
j = -1;
}
else
{
digit1 = num / powB(10, j);
_putchar(digit1 + 48);
tmp2 = num;
num -= powB(10, j) * digit1;
if (numLength(tmp2) - numLength(num) == 2)
{
_putchar(48);
j--;
}
j--;
}
}
}

}

/**
*print_array-prints n elments of array a
*@a:an integer array
*@n: number of elements to be printed
*
*/
void print_array(int *a, int n)
{
int i = 0;
while (i < n)
{
putnchar(a[i]);
if (i == n - 1)
break;
_putchar(',');
_putchar(' ');
i++;
}
_putchar('\n');

}
