#include "main.h"
/**
 * checker - checks the matching symbols to print
 * @format: the string containing the arguments
 * @args: arguments
 *
 * Return: return int for symbol
 *
 */
int checker(const char *format, va_list args)
{
	int i, symbs, len, (*func)(va_list);

	symbs = 0;
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			func = get_format(&format[i + 1]);
			if (func != NULL)
			{
				len = func(args);
				if (len == -1)
					return (-1);
				symbs += len;
				i++;
			}
			else if (format[i + 1] && format[i + 1] != ' ')
			{
				if (format[i + 1])
				{
					my_putchar(format[i]);
					my_putchar(format[i + 1]);
					symbs = symbs + 2;
					i++;
				}
				else
					return (-1);
			}
		}
		else
		{
			my_putchar(format[i]);
			symbs++;
		}
	}
	return (symbs);
}

/**
 * get_format - gets a functions based on the read format
 * @format: the string containing the arguments
 * Return: function
 */

int (*get_format(const char *format))(va_list)
{
	int k;

	check_t s_symbs[] = {{
		"c", _putchar},
		{"s", _puts},
		{"d", _printint},
		{"i", _printint},
		{"%", _printpercent},
		{NULL, NULL}
	};

	for (k = 0; s_symbs[k].sym; k++)
	{
		if (s_symbs[k].sym[0] == format[0])
		{
			return (s_symbs[k].f);
		}
	}

	return (NULL);
}

