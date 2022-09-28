#include "main.h"
/**
 * factorial - a function that returns the factorial of a number.
 * @n: An input integer
 * Return: The factorial of n
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
