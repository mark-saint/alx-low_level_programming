#include "3-calc.h"

/**
* main - fn
* @argc: param
* @argv: param
* Return: sth
*/
int main(int argc,  char **argv)
{
int x, y, z;
int (*f)(int, int);

if (argc != 4)
{
printf("Error\n");
exit(98);
}

x = atoi(argv[1]);
y = atoi(argv[3]);

f = get_op_func(argv[2]);

if (f == NULL)
{
printf("Error\n");
exit(99);
}
z = f(x, y);

printf("%d\n", z);
return (0);
}
