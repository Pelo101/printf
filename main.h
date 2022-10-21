#ifndef _MAIN_H_
#define _MAIN_H_

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

/* this prototypes will be used by printf.c */
int _printf(const char *, ...);

/* utils.c prototypes */
int _strlen(const char *);
int print(char *);
char *itoa(long int, int);

/* _putchar.c */
int _putchar(char);
int buffer(char);

/* handler.c */
int handler(const char *, va_list);
int percent_handler(const char *, va_list, int *);

/**
* struct _format - typedef struct
*
* @type: takes the format 
* @f: associated function
*/
typedef struct _format
{
	char type;
	int (*f)(va_list);
} format;

/* these prototypes are used for Printing */
int print_string(va_list);
int print_char(va_list);
int print_integer(va_list);
int print_binary(va_list);
int print_rot(va_list);
int print_rev_string(va_list);
int print_pointer(va_list);
int print_hexadecimal_upp(va_list);
int print_hexadecimal_low(va_list);
int print_octal(va_list);
int print_unsigned(va_list);

#endif /* Main_H */
