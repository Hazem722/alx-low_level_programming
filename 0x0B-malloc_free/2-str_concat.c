#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: string one
 * @s2: string to append to string one
 * Return: pointer to a newely allocated space in memory
 * which contains s1 followed by s2 and null terminator or,
 * NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	unsigned int i, k;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (k = 0; s2[k] != '\0'; k++)
	{
		s[i] = s2[k];
		i++;
	}
	s[i] = '\0';
	s = malloc(sizeof(char) * i);
	if (s == NULL)
		return (NULL);
	return (s);
