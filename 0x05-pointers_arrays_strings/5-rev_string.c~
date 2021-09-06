#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: string s
 * Return: length of string
 */
int _strlen(char *s)
{

	int length = 0;

	while (*s)
{
		s++;
		length++;
}
	return (length);
}

/**
 * rev_string - reverses a string
 * @s: string s
 */
void rev_string(char *s)
{
	int length = _strlen(s);
	int counter = 0;
	char tmp;

	while (counter < length / 2)
	{
		tmp = *(s + counter);
		*(s + counter) = *(s + length - 1 - counter);
		*(s + length - 1 - counter) = tmp;
		counter++;
	}

}

