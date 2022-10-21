#include "main.h"

/**
 *print_string - prints string
 *@list: list
 *
 *Return: length of string
 */


int print_string(va_list list)

{

char *p;

int p_len;



p = va_arg(list, char*);

p_len = print((p != NULL) ? p : "(null)");



return (p_len);

}


