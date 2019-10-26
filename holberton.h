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

#endif /* HOLBERTON_H */
