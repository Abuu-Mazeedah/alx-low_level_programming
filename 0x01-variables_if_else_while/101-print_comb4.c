#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int d, p, q;

	for (d = 0; d < 8; d++)
	{
		for (p = d + 1; p <= 9; p++)
		{
			for (q = p + 1; q <= 10; q++)
			{
				if (d == 7 && p == 8 && q == 9)
				{
					putchar((d % 10) + '0');
					putchar((p % 10) + '0');
					putchar((q % 10) + '0');

					if (d == '7' && p == '8' && q == '9')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
