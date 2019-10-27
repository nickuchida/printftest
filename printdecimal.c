#include "holberton.h"

int print_d(int n)
{
        if (n < 0)
        {
                print_c('-');
                n = -n;
        }
        if (n == 0)
                print_c('0');
        if (n / 10)
                print_i(n / 10);
        print_c(n % 10 + '0');

	return (1);
}
