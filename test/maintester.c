#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char name1[] = "Prosper";
	char name2[] = "Promise";
	int len, len2;

	len = _printf("Let's try to printf a simple sentence.\n");
	len2 = printf("Let's try to printf a simple sentence.\n");
	len = _printf("Percent:[%%]\n");
    	len2 = printf("Percent:[%%]\n");
	_printf("Character:[%c]\n", 'H');
	printf("Character:[%c]\n", 'H');
	_printf("String:[%s and %s]\n", name1, name2);
	printf("String:[%s and %s]\n", name1, name2);
	_printf("Len:[%d]\n", len);
	printf("Len:[%d]\n", len2);

	return (0);
}
