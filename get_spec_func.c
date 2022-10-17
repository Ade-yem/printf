#include "main.h"
#include <string.h>
#include <stddef.h>

/**
 * get_spec_func - selects the correct function to perform the specifier
 *  operation asked by the user.
 * @s: operator passed as argument to the program
 * @index: index for the identifier
 * Return: return a pointer to the function
 */

int (*get_spec_func(const char *s, int index))(va_list, char *, unsigned int)
{
	print_t formats[] = {
		{"c", handle_char},
		{"s", handle_str},
		{"d", handle_int},
		{"i", handle_int},
		{NULL, NULL}
	};
	int i = 0, j = 0, f_ind;

	f_ind = index;

	while (formats[i].type_arg != NULL)
	{
		if (s[index] == formats[i].type_arg[j])
		{
			if (formats[i].type_arg[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
			j = 0, i++, index = f_ind;
	}
	return (formats[i].f);
}
