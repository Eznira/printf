#include "main.h"

/**
 * print_octal - Prints an unsigned integer in octal to stdout
 * @args: A va_list containing the unsigned integer to print
 *
 * Return: The number of characters printed
 */
int print_octal(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	int octal[32];
	int i = 0;

	while (num > 0)
	{
		octal[i] = num % 8;
		num /= 8;
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
			_putchar('0' + octal[i - 1]);
			count++;
			i--;
		}
	}

	return (count);
}
