#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

typedef struct newprint
{
	char * print;
	int (*fp)(int args, ...);
} tprint;

int _printf(const char *format, ...);

int print_c(char c);

void print_s(char *s);

void print_i(int n);

void print_d(int n);

int (*get_type(char *s))(char, char);

#endif /* HOLBERTON_H */
