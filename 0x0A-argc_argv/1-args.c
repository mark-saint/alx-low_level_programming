#include <stdio.h>

/**
* main - argc argv
* @argc: num arguments
* @argv: arguments
* Description: read
* Return: (0);
*/

int main(int argc, char **argv)
{
int sum = -1;
while (*argv++)
{
sum++;

}
if (sum == argc - 1)
printf("%d\n", sum);


return (0);
}
