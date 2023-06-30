#include "main.h"

/**
 * _strcat - function that concatenates
 *           two strings
 *
 * @dest: pointer to destnation input
 * @src: pointer to source input
 *
 * Return: poniter to reasulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;
	/*find the size of dest arry*/
	while (dest[c])
		c++;

	/** iterate throught each scr array value without the null bnte*/
	for (c2 = 0; src[c2] ; c2++)
		/*append src[c2] to dest[c] while overwritting the null byte in dest*/
		dest[c++] = src[c2];

	return (dest);
}
