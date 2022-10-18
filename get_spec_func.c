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
		/*{"p", print_add}, {"li", prinlint},*/
		/*{"ld", prinlint}, {"lu", prinlunt},*/
		/*{"lo", prinloct}, {"lx", prinlhex},*/
		/*{"lX", prinlupx}, {"hi", prinhint},*/
		/*{"hd", prinhint}, {"hu", prinhunt},*/
		/*{"ho", prinhoct}, {"hx", prinhhex},*/
		/*{"hX", prinhupx}, {"#o", prinnoct},*/
		/*{"#x", prinnhex}, {"#X", prinnupx},*/
		/*{"r", print_rev}, {"+d", prinpint},*/
		{"#i", print_int}, {"#d", print_int},
		{"#u", print_unt}, /*{"+i", prinpint},*/
		{"+u", print_unt}, {"+o", print_oct},
		{"+x", print_hex}, {"+X", print_upx},
		/*{" i", prinsint}, {" d", prinsint},*/
		{" u", print_unt}, {" o", print_oct},
		{" x", print_hex}, {" %", print_prg},
		/*{"S", print_usr}, {"R", print_rot},*/
		{"l", print_prg}, {"h", print_prg},
		/*{" +i", prinpint}, {" +d", prinpint},*/
		/*{"+ i", prinpint}, {"+ d", prinpint},*/
		{"%", print_prg}, {NULL, NULL},
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
