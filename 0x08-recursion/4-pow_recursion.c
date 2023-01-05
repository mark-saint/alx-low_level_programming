#include "main.h"

/**
* _pow_recursion - function
* @x: param number
* @y: param pow
* Return: power
* Description: returns recursion of a number
*/
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);

if (y == 0)
return (1);

return (x * _pow_recursion(x, y - 1));

}
