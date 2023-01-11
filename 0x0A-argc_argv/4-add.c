#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - argc argv
* @argc: num arguments
* @argv: arguments
* Description: read
* Return: (0);
*/
int main(int argc, char **argv)
{
int sum = 0;
int i = 1;

if (argc < 3)
{
printf("0\n");
}

else
{
while (i < argc)
{

if (isdigit(argv[i][0]) != 0)
{
sum += atoi(argv[i]);
}
else
{
printf("Error\n");
return (1);
}
i++;
}
printf("%d\n", sum);
}
return (0);
}
