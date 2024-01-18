#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string.
 */
char *_strdup(char *str)
{
	char *dest, *toReturn;

	if (str == NULL)
		return (NULL);

	dest = malloc((1 + strlen(str)) * sizeof(char));
	toReturn = dest;

	if (toReturn == NULL)
		return (NULL);

	while (*str)
	{
		*dest++ = *str++;
	}

	return (toReturn);
}
