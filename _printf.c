#include "main.h"

/**
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
 */

int _printf(const char *format, ...)
{
	va_list args;
	unsigned int i = 0, buf_size = 0, len = 0;
	char *buffer;
	int (*function)(va_list, char *, unsigned int);

	va_start(args, format), buffer = malloc(sizeof(char *) * 1024);
	if (!format || !buffer || (format[i] == '%' && !format[i + 1]))
		return (-1);
	if (!format[i])
		return (0);
	for (i = 0; format && format[i]; i++)
	{
		if (format[i] == '%')
		{
			if (format[i + 1] == '\0')
			{	print(buffer, buf_size), free(buffer), va_end(args);
				return (-1);
			}
			else
			{	function = get_spec_func(format, i + 1);
				if (function == NULL)
				{
					if (format[i + 1] == ' ' && !format[i + 2])
						return (-1);
					handl_buffer(buffer, format[i], buf_size), len++, i--;
				}
				else
				{
					len += function(args, buffer, buf_size);
				}
			} i++;
		} else
			handl_buffer(buffer, format[i], buf_size), len++;
		for (buf_size = len; buf_size > 1024; buf_size -= 1024)
			;
	}
	print(buffer, buf_size), free(buffer), va_end(args);
	return (len);
}
