#include "variadic_functions.h"

/**
* print_char - sth
* @c: param
*/
void print_char(va_list c)
{
printf("%c", va_arg(c, int));

}
/**
* print_string - sth
* @s: param
*/
void print_string(va_list s)
{
char *str = va_arg(s, char *);
if (str == NULL)
{
str = "(nil)";
}
printf("%s", str);
}
/**
* print_int - sth
* @i: param
*/
void print_int(va_list i)
{
printf("%d", va_arg(i, int));
}

/**
* print_float - sth
* @f: param
*/
void print_float(va_list f)
{
printf("%f", va_arg(f, double));
}

/**
* print_all - sth
* @format: param
*/
void print_all(const char * const format, ...)
{
unsigned int i, j;

print_t p[] = {
{"c", print_char},
{"s", print_string},
{"i", print_int},
{"f", print_float},
{NULL, NULL}
};

va_list ptr;
va_start(ptr, format);
i = 0;
while (format[i])
{
j = 0;
while (p[j].t != NULL)
{
if (*(p[j].t) == format[i])
{

p[j].f(ptr);
printf(", ");
break;
}
j++;
}
i++;
}
va_end(ptr);
printf("\n");
}
