#include "main.h"

/**
 * handle_char - writes the character to stdout
 * @args: input char
 * @buf: buffer pointer
 * @buff_size: index for buffer pointer
 * Return: On success 1.
 */


int handle_char(va_list args, char *buf, unsigned int buff_size)
{
	char c;

	c = va_arg(args, int);
	handl_buffer(buf, c, buff_size);
	return (1);
}



/**
 * handle_str - writes the string to stdout
 * @args: input string
 * @buf: buffer pointer
 * @buff_size: index for buffer pointer
 * Return: On success 1.
 */

int handle_str(va_list args, char *buf, unsigned int buff_size)
{
	char *str;
	unsigned int i;
	char nill[] = "(null)";

	str = va_arg(args, char *);
	if (str == NULL)
	{
		for (i = 0; nill[i]; i++)
			buff_size = handl_buffer(buf, nill[i], buff_size);
		return (6);
	}
	for (i = 0; str[i]; i++)
		buff_size = handl_buffer(buf, str[i], buff_size);
	return (i);
}


/**
 *handle_int - writes the string to stdout
* @args: input string
* @buf: buffer pointer
* @buff_size: index for buffer pointer
* Return: On success 1.
 */

int handle_int(va_list args, char *buf, unsigned int buff_size)
{
	int input;
        unsigned int inpt, tmp, i, j, k;

        input = va_arg(args, int);
	i = 0;

        if (input < 0)
        {
                inpt = input * -1;
                buff_size = handl_buffer(buf, '-', buff_size);
                i = 1;
        }
        else
                inpt = input;

        tmp = inpt, k = 1;

        while (tmp > 9)
        {
                k *= 10;
                tmp /= 10;
        }
        for (j = 0; k > 0; k /= 10, j++)
        {
                buff_size = handl_buffer(buf, ((inpt / k) % 10) + '0', buff_size);
        }
        return (j + i);
}

