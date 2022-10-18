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
int print_prg(va_list __attribute__((unused)), char *, unsigned int);
int print_chr(va_list arguments, char *buf, unsigned int ibuf);
int print_str(va_list arguments, char *buf, unsigned int ibuf);
int print_int(va_list arguments, char *buf, unsigned int ibuf);
int print_bnr(va_list arguments, char *buf, unsigned int ibuf);
int (*get_spec_func(const char *s, int index))(va_list, char *, unsigned int);
int ev_print_func(const char *s, int index);
char *fill_binary_array(char *binary, long int int_in, int isneg, int limit);
int print(const char *str, unsigned int buf_size);
unsigned int handl_buffer(char *buf, char c, unsigned int ibuf);
int print_upx(va_list arguments, char *buf, unsigned int ibuf);
int print_unt(va_list arguments, char *buf, unsigned int ibuf);
int print_oct(va_list arguments, char *buf, unsigned int ibuf);
int print_hex(va_list arguments, char *buf, unsigned int ibuf);
char *fill_hex_array(char *bnr, char *hex, int isupp, int limit);
char *fill_oct_array(char *bnr, char *oct);

#endif /* _MAIN_H_ */
