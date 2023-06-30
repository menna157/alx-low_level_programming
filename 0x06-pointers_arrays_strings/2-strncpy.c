#include "main.h"

/**
 * _strcat - function that concatenates
 *           two strings
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	while (i < n)
	{
		dest[c + i] = '\0';
		i++;
	}
	return (dest);
}
