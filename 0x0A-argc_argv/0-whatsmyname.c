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
while (argc--)
printf("%s\n", *argv++);
exit(EXIT_SUCCESS);
return (0);
}
