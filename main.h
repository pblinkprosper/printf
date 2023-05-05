#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdlib.h>

#define BUFFER 1024

/**
 * struct formats - a struct data type for checker
 * @sym: the pointer to string of symbols
 * @f: the input function
 */
typedef struct formats
{
	char *sym;
	int (*f)(va_list);
} check_t;

int _printf(const char *format, ...);
int my_putchar(char c);
int _putchar(va_list args);
int _puts(va_list args);
int _printint(va_list args);
int _printpercent(__attribute__((unused))va_list args);
int checker(const char *format, va_list args);
int (*get_format(const char *format))(va_list);
char *_revstring(char *s);
void _printout(char *s);
int _printbinary(va_list args);
unsigned int _baselen(unsigned int n, int base);

#endif
