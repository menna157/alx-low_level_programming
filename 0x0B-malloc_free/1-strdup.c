#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space in memory.
 *
 * @str: string parameter.
 *
 * Return: NULL if str = NULL.
 */

char *_strdup(char *str)
{
	int n = 0, size = 0;
	char *m;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
	;
	m = malloc(size * sizeof(*str) + 1);
	if (m == 0)
	{
		return (NULL);
	}
	else
	{
		for (; n < size; n++)
			m[n] = str[n];
	}
	return (m);
}
