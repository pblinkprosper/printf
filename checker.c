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
	int i, j, symbs, len;
	check_t s_symbs[] = {{"c", _putchar}, {"s", _puts}, {"d", _printint},
		{"i", _printint}, {"%", _printpercent}, {NULL, NULL}};

	symbs = 0;
	for (i = 0; format[i]; i++)
	{
		if (format[i] == '%')
		{
			for (j = 0; s_symbs[j].sym != NULL; j++)
			{
				if (format[i + 1] == s_symbs[j].sym[0])
				{
					len = s_symbs[j].f(args);
					if (len == -1)
						return (-1);
					symbs += len;
					break;
				}
			}
			if (s_symbs[j].sym == NULL && format[i + 1] != ' ')
			{
				if (format[i + 1])
				{
					my_putchar(format[i]);
					my_putchar(format[i + 1]);
					symbs = symbs + 2;
				}
				else
					return (-1);
			}
			i += 1;
		}
		else
		{
			my_putchar(format[i]);
			symbs++;
		}
	}
	return (symbs);
}
