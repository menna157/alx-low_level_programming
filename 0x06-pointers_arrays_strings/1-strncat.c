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
char *_strcat(char *dest, char *src, int n)
{
int c, i;

c = 0;
/*find the size of dest arry*/
while (dest[c])
c++;
/** iterate throught each scr array value without the null bnte*/
for (i = 0; i < n &&  src[i] != '\0'; i++)
dest[c + i] = src[i];
/*null trmnation dest*/
dest[c + i] = '\0';
return (dest);
}
~
