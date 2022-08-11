#include "main.h"
#include <stdio.h>

/**
 * _printf -  a function that produces output according to a format
 * @format: is a character string
 * @char: character
 *
 * Return: the number of characters printed
 */

int _printf(const char * format, ...)
{
	int i, p;
	va_list args;
	void (*f)(va_list);

	va_start(args, format);
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		if (format[i] == '%')
		{
			f = get_func(format[i + 1]);
			p = f(args);	
		}
		i++;

	}
	va_end(args);
	return(0);
}
