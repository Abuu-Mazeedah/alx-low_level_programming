#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d, i;

	for (d = 0; d < 9; d++)
	{
		for (i = d + 1; i < 10; i++)
		{
			putchar((d & 10) + '0');
			putchar((i % 10) + '0');
			if (d == 8 && i == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
