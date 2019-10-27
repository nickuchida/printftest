#include "holberton.h"

/**
 * get_type - selects the correct function to perform
 * @s: the type passed as an argument to the program
 * Return: a pointer to the function that corresponds to the type given as
 * a parameter
 */
int (*get_type(char *s))(char, char)
{
	tprint type[] = {
		{"c", print_c},
		{"s", print_s},
		{"%", print_p},
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
	};
	int i = 0;

	while (type[i].print) /* while type[i] contains a valid specifier */
	{
		if (*type[i].print == *s) /* specifier the user inputs */
		{
			if (*s + 1 == 'c' || *s + 1 == 's' || *s + 1 == 'd' |
			    *s + 1 == 'i')
/* if following character is a specifier return the function */
				return (type[i].print);
/* return the valid function */
		}
		i++;
	}
	return (NULL);
}
