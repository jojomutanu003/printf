#include "main.h"



/**

 * _printf - function like printf

 * @format: string with format to print

 *

 * Return: number of chars that print

 */

int _printf(const char *format, ...)

{

	va_list args;

	int length = 0;



	if (format == NULL)

		return (-1);



	va_start(args, format);



	length = _print_format(format, args);

	va_end(args);

	return (length);

}
