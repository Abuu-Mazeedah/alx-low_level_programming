#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0-14
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
int x, y;

for (x = 0; x <= 9; x++)
{
for (x = 0; x <= 9; x++)
{
if (y > 9)
_putchar(y / 10 + '0');
_putchar(y % 10 + '0');
}
_putchar('\n');
}
}
