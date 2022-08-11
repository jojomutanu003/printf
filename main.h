#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>

int _puts(char *str);
int _putchar(char c);
char *convert(unsigned int num, int base, int lowercase);
int _printf(const char *format, ...);
int (*get_func(char x))(va_list args);

#endif
