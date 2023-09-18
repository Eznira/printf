#include "main.h"
/**
 * _strlen - Returns the length of a string.
 * @a: The pointer to the string.
 *
 * Return: The lenght of the string.
 */
int _strlen(char *a)
{
	int len = 0;

	for ( ; *a != '\0'; a++)
		len++;

	return (len);
}
/**
 * _print_rev_helper - Prints out a string in reversed order to the
 *             standard output, recursibely.
 * @a: The pointer to the string.
 *
 * Return: number of printed char.
 */
void _print_rev_helper(char *a)
{
	if (*a == '\0')
	{
		return;
	}

	_print_rev_helper(a + 1);
	_putchar(*a);
}

/**
 * _print_rev - Prints out a string in reversed order to the
 *             standard output.
 * @args: The list struct holding the string.
 *
 * Return: number of printed char.
 */
int _print_rev(va_list args)
{
	char *s;

	s = va_arg(args, char *);
	_print_rev_helper(s);
	return (_strlen(s));
}
