#include <unistd.h>



/**

 * print - writes the character c to stdout

 * @str: The character to print

 *

 * Return: On success 1.

 * On error, -1 is returned, and errno is set appropriately.

 */

int print(const char* str)
{
	int i = 0, n;

	while (str[i] != '\0')
		i++;
	n = i + 2;
	return (write(1, str, n));
}
