#include "main.h"
/**
 * _printf - prints input to the screen
 * @format: the character string
 * Return: returns an integer
 */
int _printf(const char *format, ...)
{
	unsigned int i, len = 0;
	va_list arg;

	va_start(arg, format);
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == 'c')
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
			else if (format[i + 1] == 'i' || format[i + 1] == 'd')
			{
				_printint(va_arg(arg, int));
				i++;
			}
			else if (format[i + 1] == 'b')
			{
				_printbinary(va_arg(arg, unsigned int));
				i++;
			}
			else if (format[i + 1] == 'u')
			{
				_unsignedint(va_arg(arg, unsigned int));
				i++;
			}
			len++;
		}
		else
			my_putchar(format[i]);
	}
	va_end(arg);
	return (len);
}
