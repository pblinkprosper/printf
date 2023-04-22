#include "main.h"

/**
 * _printint - prints integers
 * @n: input integer
 *
 * Return: integer
 */

int _printint(int n)
{
	int i = n;
	if (n < 0)
	{
		my_putchar('-');
		n = n * (-1);
	}
	/*
	if (n >= 0 && n <= 9)
	{
		my_putchar(n + '0');
	}
	*/

	else if (n > 9)
		_printint(n / 10);
	my_putchar('0' + (i % 10));
	return (i);
}
