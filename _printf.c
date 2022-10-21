#include "main.h"

/**
 * _printf - Produces outpust according to a format
 * @format: is a character string. The format string
 *
 * Return: the number of charactes printed, null byte excluded
 */
int _printf(const char *format, ...)
{
	int size;
	va_list args;

	if (format == NULL)
	{
		return (-1);
	}
	size = _strlen(format);
	if (size <= 0)

	{
		return (0);
	}

	va_start(args, format);
	size = handler(format, args);

	_putchar(-1);
	va_end(args);

	return (size);
}
