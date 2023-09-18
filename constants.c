#include "main.h"

const conv_specifier_struct_t conv_specifier_map[] = {
	{'c', print_char},
	{'s', print_string},
	{'%', print_percent},
	{'d', print_int},
	{'i', print_int},
	{'b', print_bin},
	{'u', print_unsigned_decimal},
	{'o', print_octal},
	{'x', _print_lower_hex},
	{'X', _print_upper_hex},
	{'r', _print_rev},
};

const int conv_specifier_map_size = sizeof(conv_specifier_map)
	/ sizeof(conv_specifier_map[0]);
