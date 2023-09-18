#include "main.h"

/**
 * print_percent - Prints a percent sign to stdout
 * @args: A va_list (unused)
 *
 * Return: The number of characters printed (1)
 */
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
