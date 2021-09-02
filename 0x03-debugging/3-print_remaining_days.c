#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, tacking
* leap years into account
* Return: 0
*/

int c(void)
{
int month;
int day;
int year;

month = 4;
day = 01;
year = 1997;

printf("Date: %02d/%02d/%04d\n", month, day, year);
day = covert_day(month, day);
print_remaing_days(month, day, year);
return (0);
}
