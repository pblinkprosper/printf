#include "main.h"
/**
 * _puts - prints a string to the stdout
 * @str: the string to be printed
 *
 * Return: returns an integer
 */
int _puts(char *str)
{
	unsigned int a, len = 0;

	if (str)
	{
		for (a = 0; str[a]; a++)
		{
			my_putchar(str[a]);
			len += 1;
		}
	}
	return (len);
}
