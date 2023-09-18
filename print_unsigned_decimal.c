#include "main.h"

/**
 * _print_un_deci_helper - Recursively prints an unsigned integer
 * @num: The unsigned integer to print
 *
 * Return: The number of characters printed
 */
int _print_un_deci_helper(unsigned int num)
{
	int count = 0;

	if (num / 10)
		count += _print_un_deci_helper(num / 10);

	_putchar('0' + num % 10);
	count++;

	return (count);
}

/**
 * print_unsigned_decimal - Prints an unsigned integer to stdout
 * @args: A va_list containing the unsigned integer to print
 *
 * Return: The number of characters printed
 */
int print_unsigned_decimal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;

	if (num == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		if (num / 10)
			count += _print_un_deci_helper(num / 10);

		_putchar('0' + num % 10);
		count++;
	}

	return (count);
}
