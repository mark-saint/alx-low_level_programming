#include "main.h"

/**
* factorial - function
* @n: param
* Return: fact of a number
* Description: returns factorial of a number
*/
int factorial(int n)
{
if (n < 0)
return (-1);
if (n == 0)
return (1);
return (n * factorial(n - 1));

}
