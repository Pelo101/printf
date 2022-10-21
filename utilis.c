#include "main.h"

/**
 *_strlen - calculate the length of the string
 *@str: string
 *
 *Return: Length
 */

int _strlen(const char *str)

{

int i;



for (i = 0; str[i] != 0; i++)

;



return (i);

}

/**
 *print - print char
 *@str: string
 *
 *Return: Length
 */



int print(char *str)

{

int i;



for (i = 0; str[i] != '\0'; ++i)

_putchar(str[i]);



return (i);

}
