#include <unistd.h>

/**
 * print - writes the character c to stdout
 * @str: The character to print
 * @buf_size: size of the buffer
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

int print(const char *str, unsigned int buf_size)
{
	return (write(1, str, buf_size));
}
