#include "main.h"

/**
 * print_bin - Prints an unsigned integer in binary to stdout
 * @args: A va_list containing the unsigned integer to print
 *
 * Return: The number of characters printed
 */
int print_bin(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	int binary[32];
	int i = 0;

	while (num > 0)
	{
		binary[i] = num % 2;
		num /= 2;
		i++;
	}

	if (i == 0)
	{
		_putchar('0');
		count++;
	}
	else
	{
		while (i > 0)
		{
			_putchar('0' + binary[i - 1]);
			count++;
			i--;
		}
	}

	return (count);
}
