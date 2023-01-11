#include <stdio.h>
#include <stdlib.h>
/**
* main - argc argv
* @argc: num arguments
* @argv: arguments
* Description: read
* Return: (0);
*/
int main(int argc, char **argv)
{
int prod = 1;
int i = 1;

if (argc == 3)
{
while (i < argc)
{
prod *= atoi(argv[i]);
i++;
}
printf("%d\n", prod);
}

else
{
printf("Error\n");
return (1);
}

return (0);
}
