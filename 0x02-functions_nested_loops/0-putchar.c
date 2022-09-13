#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	char container [10] = "_putchar";
	for(int i = 0; i < 8; i++)
	{
		putchar(container[i]);
	}
	putchar('\n');
	return (0);
}
