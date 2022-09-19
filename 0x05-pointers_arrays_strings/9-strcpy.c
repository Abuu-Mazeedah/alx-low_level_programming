#include "main.h"
#include <stdio.h>
/**
 * _strcpy - a function that copies the string pointed to by src,
 * including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest: A pointer to destination of string
 * @src: A pointer to source string to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, const char *src)
{
	int i;

	i = 0;
	while (i >= 0)
	{
		dest[i] = src[i];
		if (src[i] == '\0')
			return (dest);
		i++;
	}
	return (dest);
}
