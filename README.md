## _printf()

The _printf project is a collaboration between Adejumo Adeyemi and Obakoyowa Ayobami, students of Software Engineering cohort 9 at ALX Africa. The function named "_printf" imitates the actual "printf" function located in the stdio.h library of C programming language. It contains some of the basic features and functions found in the manual 3 of "printf".



_printf() is a function that performs formatted output conversion and print data. Its prototype is the following:



	int _printf(const char *format, ...)



Where **format** contains the string that is printed. As _printf() is variadic function, it can receives n arguments that replace by n tags written inside the string.



The format tags prototype is the following:



	%[flags][length]specifier


If the program runs successfully, the **return value** is the amount of chars printed.


| Specifier | Output |
| ------------- | ------------- |
| c  | Character  |
| d or i | Signed decimal integer |
| s  | String of characters  |
| b  | Signed binary  |
| o  | Signed octal  |
| u  | Unsigned integer  |
| x  | Unsigned hexadecimal  |
| X  | Unsigned hexadecimal (uppercase)  |
| %  | Character  |

| Flags | Description | Specifiers |
| ------------- | ------------- | ------------- | 
| +  | Prints a plus sign (+) when the argument is a positive number. In other case, prints a minus sign (-). | i, d |
| (space) | Prints a blank space if the argument is a positive number | i, d |
| #  | Prints 0, 0x and 0X for o, x and X specifiers, respectively. It doesn't print anything if the argument is zero | o, x, X |

------------


## Examples



1. Printing the string of chars "Hello, Holberton":

	+ Use: `_printf("Hello %s.", "world!");`

	+ Output: `Hello world!.`

	

2. Printing an integer number:

	+ Use: `_printf("10 + 10 is equal to %d.", 20);`

	+ Output: `10 + 10 is equal to 20.`

	

3. Printing a binary, octal and hexadecimal:

	+ Use: `_printf("10 in binary is [%b], in octal is [%o] and in hexadecimal is [%x]", 5, 5, 5);`

	+ Output: `10 in binary is [1010], in octal is [12] and in hexadecimal is [A]`

	

4. Printing a string codified in ROT13:

	+ Use: `_printf("Hello in ROT13 is %R", "Hello");`

	+ Output: `Hello in ROT13 is Urybb`



Using flags and length tags:



5. Printing the string of chars "Hello, Holberton":

	+ Use: `_printf("2 * 2 = %+d and 5 * -5 = %+i", 4, -25);`

	+ Output: `2 * 2 = +4 and 5 * -5 = -25`

	

6. Printing a long integer number and short integer number:

	+ Use: `_printf("1 million as a long int is %ld, but as a short int is %hd", 1000000, 1000000);`

	+ Output: `1 million as a long int is 1000000, but as a short int is 16960`





------------



## File Functions



### _printf.c

Own Printf Function Tha Performs Formatted Output Conversion And Print Data.



------------



### main.h

Header File Were All Prototypes Are Saved.



------------



### get_spec_func.c

Pointer To A Function That Selects The Correct Function To Perform The Operation.



------------



### print.c

Function That Prints The Buffer.



------------



### handl_buffer.c

Function That Concatenates The Buffer Characters.



------------



### print_char.c

Contains:

Function That Writes The Character C To Stdout.

```c

/* Indetifier : %c */

```

------------

### print_str.c

Function That Writes The String To Stdout.

```c

/* Indetifier : %s */

```
---------------

### print_int.c

Function That Prints An Integer.

```c

/* Indetifier : %i or %d */

```

------------

### print_bnr.c

Function That Prints Decimal In Binary.

```c

/* Indetifier : %b */

```
------------

### print_oct.c
Function That Prints Decimal In Octal.
```c
/* Indetifier : %o */
```

------------

### print_hex.c
Function That Prints Decimal In Hexadecimal.
```c
/* Indetifier : %x */
```

------------

### print_upx.c
Function That Prints Decimal In Uppercase Hexadecimal.
```c
/* Indetifier : %X */
```

------------

### print_unt.c
Function That Prints An Unsigned Integer.
```c
/* Indetifier : %u */
```
------------

### Authors

Adejumo Adeyemi and Obakoyowa Ayobami.

------------

### End
