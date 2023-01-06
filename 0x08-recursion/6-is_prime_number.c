#include "main.h"

/**
* number - generates numbers
* @n: param
* @i: counter
* Return: counter
* Description: returns counter
*/
int number(int n, int i)
{
if (n % i == 0 || n < 2)
return (0);
else if (i > n / 2)
return (1);
else
return (number(n, i + 1));
}

/**
* is_prime_number - function
* @n: number
* Return: sth
 * Description: sth
*/
int is_prime_number(int n)
{
if (n == 2)
return (1);
return (number(n, 2));

}
