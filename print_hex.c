#include "main.h"

/**
 * _print_lower_hex - Prints an unsigned integer in lowercase hexadecimal
 * @args: A va_list containing the unsigned integer to print
 *
 * Return: The number of characters printed
 */
int _print_lower_hex(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	char hex_chars[] = "0123456789abcdef";
	char hex[32];
	int i = 0;

	while (num > 0)
	{
		hex[i] = hex_chars[num % 16];
		num /= 16;
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
			_putchar(hex[i - 1]);
			count++;
			i--;
		}
	}

	return (count);
}

/**
 * _print_upper_hex - Prints an unsigned integer in uppercase hexadecimal
 * @args: A va_list containing the unsigned integer to print
 *
 * Return: The number of characters printed
 */
int _print_upper_hex(va_list args)
{
	unsigned int num = va_arg(args, unsigned int);
	int count = 0;
	char hex_chars[] = "0123456789ABCDEF";
	char hex[32];
	int i = 0;

	while (num > 0)
	{
		hex[i] = hex_chars[num % 16];
		num /= 16;
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
			_putchar(hex[i - 1]);
			count++;
			i--;
		}
	}

	return (count);
}
