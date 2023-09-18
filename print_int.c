#include "main.h"

/**
 * _print_int_helper - Recursively prints an integer
 * @n: The integer to print
 *
 * Return: The number of characters printed
 */
int _print_int_helper(int n)
{
	int count = 0;

	if (n / 10)
		count += _print_int_helper(n / 10);

	_putchar('0' + n % 10);
	count++;

	return (count);
}

/**
 * print_int - Prints an integer to stdout
 * @args: A va_list containing the integer to print
 *
 * Return: The number of characters printed
 */
int print_int(va_list args)
{
	int n = va_arg(args, int);
	int count = 0;

	if (n < 0)
	{
		_putchar('-');
		count++;
		n = -n;
	}

	if (n / 10)
		count += _print_int_helper(n / 10);

	_putchar('0' + n % 10);
	count++;

	return (count);
}
