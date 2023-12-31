#include "shell.h"
/**
 * print_digits - Prints numbers, used to print the error message
 * @n: number to print
 * Return: Number
 */

int print_digits(int n)
{
	unsigned int number;
	int i = 0;

	if (n < 0)
	{
		number = -n;
		i = i + putchar('-');
	}
	else
	{
		number = n;
	}
	if (number / 10 != '\0')
		i = i + print_digits(number / 10);
	i = i + putchar(number % 10 + '0');
	return (i);
}
