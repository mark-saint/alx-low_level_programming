#include "main.h"

/**
* _puts - funtion
* @str: param
* Description: sth
*/
void _puts(char *str)
{
int a;
a = 0;

while (str[a] != '\0')
{
_putchar(str[a]);
a++;
}
_putchar('\n');

}
