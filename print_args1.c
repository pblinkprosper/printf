#include "main.h"

/**
 * _putchar - print a character
 * @args: arguments
 *
 * Return: number of char
 */

int _putchar(va_list args)
{
	my_putchar(va_arg(args, int));
	return (1);
}

/**
 * _puts - prints a string to the stdout
 * @args: arguments
 *
 * Return: returns an integer
 */
int _puts(va_list args)
{
	int a;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
	}
	if (str)
	{
		for (a = 0; str[a]; a++)
		{
			my_putchar(str[a]);
		}
	}
	return (a);
}

/**
 * _printpercent - prints the percent symbol
 * @args: arguments
 *
 * Return: returns a character
 */
int _printpercent(__attribute__((unused))va_list args)
{
	my_putchar('%');
	return (1);
}

/**
 * _printint - prints integers
 * @args: arguments
 *
 * Return: integer
 */

int _printint(va_list args)
{
	long int n, m;
	int i, div;

	i = 0;
	div = 1;
	n = va_arg(args, int);
	if (n < 0)
	{
		my_putchar('-');
		i++;
		n = -n;
	}
	m = n;
	while (m > 9)
	{
		div *= 10;
		m = (m / 10);
	}
	while (div >= 1)
	{
		m = (n % div);
		n /= div;
		my_putchar('0' + n);
		n = m;
		div /= 10;
		i++;
	}
	return (i);
}

/**
 * _printbinary - prints integers in binary
 * @args: arguments
 *
 * Return: integer
 */

int _printbinary(va_list args)
{
	unsigned int n, i, b;
	unsigned int bits[32];


	n = va_arg(args, int);

	i = 0;
	b = 0;
	if (n < 1)
	{
		my_putchar('0');
		i++;
		return (i);
	}
	while (n > 0)
	{
		bits[i] = n % 2;
		n /= 2;
		i++;
	}
	for (b = i - 1; b > 0; b--)
		my_putchar('0' + bits[b]);

	my_putchar('0' + bits[b]);
	return (i);
}
