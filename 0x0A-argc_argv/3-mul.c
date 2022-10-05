#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers and prints the result
 * @argc: argument count must be exactly two numbers
 * @argv: argument vector
 * Return: 0 on success, 1 on failure
 */
int main(int argc, char *argv[])
{
	int i;
	int j = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			j *= atoi(argv[i]);
		}
		printf("%d\n", j);
	}
	else
		printf("Error\n");
	return (0);
}
