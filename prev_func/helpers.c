#include "main.h"

/**
 * _revstring - reverses a string
 * @s: pointer to the string to be reversed
 *
 * Return: reversed string
 */

char *_revstring(char *s)
{
	char *revd_s;
	int len, i, j;

	for (i = 0; s[i]; i++)
		;
	len = i;
	revd_s = malloc(sizeof(char) * (len + 1));

	if (revd_s == NULL)
		return (NULL);
	for (j = 0; j < len; j++)
		revd_s[j] = s[len - j - 1];
	revd_s[j] = '\0';
	return (revd_s);
}

/**
 * _printout - prints out the converted base number
 * @s: pointer to array of base characters
 *
 * Return: void
 */

void _printout(char *s)
{
	int i;

	for (i = 0; s[i]; i++)
		my_putchar(s[i]);
}

/**
 * _baselen - calculates the length of a base of a number
 * @n: input number
 * @base: destination base
 *
 * Return: length of the num (integer)
 */

unsigned int _baselen(unsigned int n, int base)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	n /= base;

	return (n);
}
