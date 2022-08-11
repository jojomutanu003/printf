#include <unistd.h>
#include "main.h"

void print_buff(char buff[], int *buff_ind);

/**
 * _printf - Printf function
 * @format: format.
 *
 * Description: prints loops thourgh the buffer.
 * Return: Printed chars.
 */
int _printf(const char *format, ...)
{
	int i, printed_chars = 0;
	int buff_ind = 0;
	va_list list;
	char buff[BUFF_SIZE];

	if (format == NULL)
		return (-1);

	va_start(list, format);

	for (i = 0; format && format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buff[buff_ind++] = format[i];
			if (buff_ind == BUFF_SIZE)
				print_buff(buff, &buff_ind);
			/* write(1, &format[i], 1);*/
			printed_chars++;
		}
	}
	print_buff(buff, &buff_ind);
	va_end(list);
	return (printed_chars);
}

/**
 * print_buffer - Prints the contents of the buffer if it exist
 * @buffer: Array of chars
 * @buff_ind: Index at which to add next char, represents the length.
 *
 * Description: The if statment checks the buffer content and prints it,
 * the printing is only when it exists.
 * Return: void
 */
void print_buff(char buff[], int *buff_ind)
{
	if (*buff_ind > 0)
		write(1, &buff[0], *buff_ind);

	*buff_ind = 0;
}
