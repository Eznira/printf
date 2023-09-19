#include "main.h"

/**
 * _printf - Custom implementation of printf function.
 * @str: The format string.
 *
 * Return: The number of characters printed.
 */
int _printf(const char *str, ...)
{
	int count_char = 0;
	va_list arg_list;
	int i;

	va_start(arg_list, str);

	if (str == NULL)
		return (-1);
	if (!str || (str[0] == '%' && !str[1]))
		return (-1);
	if (str[0] == '%' && str[1] == ' ' && !str[2])
		return (-1);
	while (*str)
	{
		if (*str == '%')
		{
			str++;

			for (i = 0; i < conv_specifier_map_size; i++)
			{
				if (*str == conv_specifier_map[i].conv_specifier)
				{
					count_char += conv_specifier_map[i].
						print_conv(arg_list);
					break;
				}
			}
		}
		else
		{
			_putchar(*str);
			count_char++;
		}

		str++;
	}
	va_end(arg_list);

	return (count_char);
}
