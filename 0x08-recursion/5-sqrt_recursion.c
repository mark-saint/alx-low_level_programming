#include "main.h"

/**
* numbers - checks for possible combinations
* @a: param
* @b: param
* Return: possible answer
* Description: finds numbers
*/
int numbers(int a, int b)
{
if (a * a == b)
{
return (a);
}
else if (a * a > b)
return (-1);
return (numbers(a + 1, b));
}

/**
* _sqrt_recursion - sqrt of a number
* @n: param
* Return: sqrt of a number
* Description: returns a sqrt of a number
*/
int _sqrt_recursion(int n)
{
return (numbers(1, n));
}
