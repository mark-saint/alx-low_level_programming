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
int i = 1;
while (i < argc)
{
printf("%s\n", argv[i]);
i++;
}
exit(EXIT_SUCCESS);
return (0);
}
