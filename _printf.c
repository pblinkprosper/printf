#include "main.h"
/**
 * _printf - prints input to the screen
 * @format: the character string
 *
 * Return: returns an integer
 */
int _printf(const char *format, ...)
{
	int symbs;
	va_list args;

	va_start(args, format);
	if (format == NULL)
		return (-1);
	
	symbs = checker(format, args);

	va_end(args);
	return (symbs);
}
