#include "main.h"

/**
 * get_spec_func - selects the correct function to perform the specifier
 *  operation asked by the user.
 * @s: operator passed as argument to the program
 * @index: index for the identifier
 * Return: return a pointer to the function
 */

int (*get_spec_func(const char *s, int index))(va_list, char *, unsigned int)
{
	print_t pr[] = {
		{"c", print_chr}, {"s", print_str},
		{"i", print_int}, {"d", print_int},
		{"b", print_bnr}, {"u", print_unt},
		{"o", print_oct}, {"x", print_hex},
		{"X", print_upx}, {" X", print_upx},
		{"p", print_add}, {"#i", print_int},
		{"#d", print_int}, {"#u", print_unt},
		{"+u", print_unt}, {"+o", print_oct},
		{"+x", print_hex}, {"+X", print_upx},
		{" u", print_unt}, {" o", print_oct},
		{" x", print_hex}, {" %", print_prg},
		{"S", print_usr}, {"l", print_prg},
		{"h", print_prg}, {"%", print_prg}, {NULL, NULL},
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (pr[i].type_arg)
	{
		if (s[index] == pr[i].type_arg[j])
		{
			if (pr[i].type_arg[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (pr[i].f);
}
