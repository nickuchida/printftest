#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

int _printf(const char *format, ...)
{
	va_list ap;
	int i = 0;
	int result = 0;

	while (format == NULL)
		return;

	va_start(ap, format);

	while (format[i])
	{
		if (format[i] == '%')
		{
			switch (format[i + 1])
			{
			case 'c':
				print_c(va_arg(ap, int));
				result++;
				break;
			case 's':
				result += print_s(va_arg(ap, char *));
				break;
			case 'd':
				print_d(va_arg(ap, int));
				break;
			case 'i':
				print_i(va_arg(ap, int));
				break;
			default:
				continue;
			}
		}
		i++;
	}
	print_c('\n');
	va_end(ap);
	return (result);
}
