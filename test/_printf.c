#include "main.h"
/**
 * _printf - prints input to the screen
 * @format: the character string
 *
 * Return: returns an integer
 */
int _printf(const char *format, ...)
{
	unsigned int i, len = 0;
	va_list arg;

	va_start(arg, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] != '%')
		{
			my_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			my_putchar(va_arg(arg, int));
			i++;
		}
		else if (format[i + 1] == 's')
		{
			_puts(va_arg(arg, char *));
			i++;
		}
		else if (format[i + 1] == '%')
		{
			my_putchar('%');
			i++;
		}
		len++;
	}
	my_putchar('\n');
	return (len);
}
