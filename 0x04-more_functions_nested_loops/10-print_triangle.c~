#include "holberton.h"

/**
 * print_triangle - print triangle of variable length
 * @size: triangle height
 */
void print_triangle(int size)
{
	int i, m;

	m = size;

	if (size <= 0)
		_putchar('\n');
	while (size > 0)
	{
		for (i = 0; i < m; i++)
			_putchar((i < size - 1) ? ' ' : '#');
		_putchar('\n');
		size--;
	}
}
