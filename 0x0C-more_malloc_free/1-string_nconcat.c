#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string one
 * @s2: string to append n bytes from to string one
 * @n: bytes of s2 to append to s1
 * Return: a pointer to a newly allocated space in memory,
 * which contains s1,followed by the first n bytes of s2,
 * and null terminated (SUCCESS) and NULL (FAILURE)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *fusion = NULL;
	unsigned int i, j, k, l;
	unsigned int myByte = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;
	i++;
	for (j = 0; s2[j] != '\0'; j++)
		;
	j++;
	if (n >= j)
		myByte = j;
	fusion = malloc(sizeof(char) * (i + myByte + 1));
	if (fusion == 0)
		return (NULL);
	for (k = 0; k < i; k++)
	{
		fusion[k] = s1[k];
	}
	for (l = 0; l < myByte; l++)
	{
		fusion[i + l] = s2[l];
	}
	fusion[i + l] = '\0';
	return (fusion);
}
