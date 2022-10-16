#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * get_spec_func - selects the correct function to perform the specifier
 *  operation asked by the user.
 * @s: operator passed as argument to the program
 * Return: return a pointer to the function
 */

int (*get_spec_func(const char *s))(va_list, char *, unsigned int)
{
	print_t formats[] = {
		{"c", handle_char},
		{"s", handle_str},
		{NULL, NULL}
	};
	int i = 0;

	while (formats[i].type_arg != NULL)
	{
		if (strcmp(s, formats[i].type_arg) == 0)
			break;
		i++;
	}
	return (formats[i].f);
}
