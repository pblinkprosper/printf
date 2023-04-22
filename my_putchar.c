#include <unistd.h>

/**
 * my_putchar - write a character to the stdout
 * @c: character to be printed
 *
 * Return: 1 (Sucess) or -1 (Error)
 */

int my_putchar(char c)
{
	return (write(1, &c, 1));
}
