#include "main.h"
#include <stdio.h>

/**
*print_integer - prints numbers in base 10
*@list: Number to print
*
*Return: Length of numbers in decimal
*/

int print_integer(va_list list)
{
	char *p_buff;
	int size;

	p_buff = itoa(va_arg(list, int), 10);
	size = print((p_buff != NULL) ? p_buff : "NULL");

	return (size);
}
