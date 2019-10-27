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
		{"d", print_d},
		{"i", print_i},
		{NULL, NULL}
	};
	int i = 0;

	while (type[i].print) /* while type[i] contains a valid specifier */
	{
		if (*type[i].print == *s) /* specifier the user inputs */
		{
			if (*s == 'c' || *s == 's' || *s == 'd' ||
			    *s == 'i')
/* if following character is a specifier return the function */
				return (type[i].fp);
/* return the valid function */
		}
		i++;
	}
	return (NULL);
}
