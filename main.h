#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>


/**
 * struct print - struct for printer functions
 * @type_arg: identifier
 * @f: pointer to a printer functions
 *
 * Description: struct that stores pointers to a
 * printer functions.
 */
typedef struct print
{
	char *type_arg;
	int (*f)(va_list, char *, unsigned int);
} print_t;


int _printf(const char *format, ...);
int handle_char(va_list args, char *buf, unsigned int buff_size);
int handle_str(va_list args, char *buf, unsigned int buff_size);
/*
int handle_int(va_list args, char *buf, unsigned int buff_size);
*/
int (*get_spec_func(const char *s, int index))(va_list, char *, unsigned int);
int print(const char *str, unsigned int buf_size);
unsigned int handl_buffer(char *buf, char c, unsigned int ibuf);

#endif /* _MAIN_H_ */
