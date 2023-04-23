#include "main.h"

/**
 * _printint - prints integers
 * @n: input integer
 *
 * Return: integer
 */

int _printint(int n)
{
	if (n < 0)
	{
		my_putchar('-');
		n = n * (-1);
	}
	if (n / 10)
		_printint(n / 10);
	my_putchar('0' + (n % 10));
	return (n);
}
