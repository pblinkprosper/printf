
#include "main.h"

/**
 * _printbinary - prints integers in binary
 * @n: input integer
 *
 * Return: integer
 */

unsigned int _printbinary(unsigned int n)
{
	if (n > 1)
	{
		_printbinary(n / 2);
	}
	_printint(n % 2);
	return (n);
}
