#include "main.h"
#include <stdio.h>

/**
 * _printf -  a function that produces output according to a format
 * @format: is a character string
 * @char: character
 *
 * Return: the number of characters printed
 */

int _printf(const char *format, ...)
{
	int (*pfunc)(va_list);

	const char *p;
	va_list list;

	register int count = 0;

	va_start(list, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += putchar('%');
				continue;
			}
		else
			count += putchar(*p);
	}
	putchar(-1);
	va_end(list);
	return (count);

	}
}
