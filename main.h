#ifndef MAIN_H
#define MAIN_H

#include <limits.h>
#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * struct conv_specifier_struct - Structure for holding a placeholder character
 *                                and its respective print function pointer.
 * @conv_specifier: The placeholder character.
 * @print_conv: The corresponding print function.
 */
typedef struct conv_specifier_struct
{
	char conv_specifier;  /* Placeholder character */
	int (*print_conv)(va_list);  /* Corresponding print function */
} conv_specifier_struct_t;

extern const conv_specifier_struct_t conv_specifier_map[];
extern const int conv_specifier_map_size;

int _putchar(char c);
int _printf(const char *str, ...);
int print_char(va_list args);
int print_string(va_list args);
int print_percent(va_list args);
int print_int(va_list args);
int _print_int_helper(int n);
int print_bin(va_list args);
int _print_un_deci_helper(unsigned int num);
int print_unsigned_decimal(va_list args);
int print_octal(va_list args);
int _print_lower_hex(va_list args);
int _print_upper_hex(va_list args);
void _print_rev_helper(char *a);
int _strlen(char *a);
int _print_rev(va_list args);

#endif /* MAIN_H */
