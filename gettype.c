#include "holberton.h"

/**
 * get_type - selects the correct function to perform
 * @s: the type passed as an argument to the program
 * Return: a pointer to the function that corresponds to the type given as
 * a parameter
 */
int (*get_type(char *s))(int, int)
{
         tprint type [] = {
                {"c", print_c},
                {"s", print_s},
                {"%", print_p},
                {"d", print_d},
                {"i", print_i},
                {NULL, NULL}
        };
        int i = 0;

        while (type[i].print) /* while ops[i] contains a valid character */
        {
                if (*type[i].print == *s && s[1] == '\0') /* op the user inputs */
                        return (type[i].print); /* returns the op function */
                i++;
        }
        return (NULL);
}
