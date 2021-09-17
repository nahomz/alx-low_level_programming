#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "main.h"
/**
*main-sum of positive numbers.
*@argc:number of commandline arguments.
*@argv:pointer to an array of commmand line arguments.
*Return:0-success, non-zero-fail.
*/

int main(int argc, char *argv[])
{
int sum = 0, i, j;
for  (i = 1; i < argc; i++)
{
if (isNumber(argv[i]) == 0)
{
j = atoi(argv[i]);
sum += j;
}
else
{
printf("Error\n");
return (1);
}
}
printf("%d\n", sum);
return (0);
}
/**
*isNumber-checks if a string is an integer.
*@number:string to be checked.
*Return: 0-if is number, 1 if not number.
*/
int isNumber(char number[])
{
int i = 0;
/*checking for negative numbers*/
if (number[0] == '-')
i = 1;
for (; number[i] != 0; i++)
{
/*if (number[i] > '9' || number[i] < '0')*/
if (!isdigit(number[i]))
return (1);
}
return (0);
}
