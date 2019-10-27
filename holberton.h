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

int print_c(char c);

int print_s(char *s);

int print_i(int n);

int print_d(int n);

int (*get_type(char *s))(char, char);

#endif /* HOLBERTON_H */
