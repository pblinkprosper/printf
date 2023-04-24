#include "main.h"

/**
 * _printuint - prints unsigned integers
 * @n: input integer
 *
 * Return: integer
 */

unsigned int _unsignedint(unsigned int n)
{
	unsigned int div = 1;

	while (n / div > 9)
	{
		div *= 10;
	}
	while (div != 0)
	{
		my_putchar('0' + (n / div));
		n %= div;
		div /= 10;
	}
	return (n);
}
