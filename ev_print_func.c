#include "main.h"
/**
 * ev_print_func - returns the amount of identifiers.
 * @s: argument indentifier
 * @index: index of argument identifier.
 * Return: amount of identifiers.
 */
int ev_print_func(const char *s, int index)
{
	print_t pr[] = {
		{"c", print_chr}, {"s", print_str}, {"i", print_int},
		{"d", print_int}, {"b", print_bnr}, {"u", print_unt},
		{"o", print_oct}, {"x", print_hex}, {"X", print_upx},
		/*{"S", print_usr}, {"p", print_add}, {"li", prinlint},*/
		/*{"ld", prinlint}, {"lu", prinlunt}, {"lo", prinloct},*/
		/*{"lx", prinlhex}, {"lX", prinlupx}, {"hi", prinhint},*/
		/*{"hd", prinhint}, {"hu", prinhunt}, {"ho", prinhoct},*/
		/*{"hx", prinhhex}, {"hX", prinhupx}, {"#o", prinnoct},*/
		/*{"#x", prinnhex}, {"#X", prinnupx}, {"+i", prinpint},*/
		{"#i", print_int}, {"#d", print_int}, {"#u", print_unt},
		/*{"+d", prinpint}, {" i", prinsint}, {" i", prinsint},*/
		{"+u", print_unt}, {"+o", print_oct}, {"+x", print_hex},
		{"+X", print_upx}, {" u", print_unt}, {" o", print_oct},
		{" x", print_hex}, {" X", print_upx}, {"%", print_prg},
		{"l", print_prg}, {"h", print_prg}, {" %", print_prg},
		/*{"r", print_rev}, {"R", print_rot}, {" +d", prinpint},*/
		/*{"+ i", prinpint}, {"+ d", prinpint}, {" +i", prinpint},*/
		{"h", print_prg}, {NULL, NULL},
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
	return (j);
}
