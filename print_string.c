#include "main.h"

/**
 * print_string - Prints a string to stdout
 * @args: A va_list containing the string to print
 *
 * Return: The number of characters printed
 */
int print_string(va_list args)
{
	char *s = va_arg(args, char *);
	int count = 0;

	while (*s)
	{
		_putchar(*s);
		s++;
		count++;
	}
	return (count);
}
