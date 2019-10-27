#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct newprint
{
	char * print;
	int (*fp)(va_list, ...);
} tprint;

int _printf(const char *format, ...);

int print_c(va_list, ...);

int print_s(va_list, ...);

int print_i(va_list, ...);

int print_d(va_list, ...);

#endif /* HOLBERTON_H */
