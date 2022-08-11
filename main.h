#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

#define BUFF_SIZE 1024

int _printf(const char *format, ...);
int _puts(char *str);
int _putchar(char c);
int (*get_func(char x))(va_list args);
#endif
