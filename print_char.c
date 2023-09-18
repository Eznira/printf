#include "main.h"

/**
 * print_char - Prints a character to stdout
 * @args: A va_list containing the character to print
 *
 * Return: The number of characters printed (1)
 */
int print_char(va_list args)
{
	char c;

	c = va_arg(args, int);
	_putchar(c);

	return (1);
}
