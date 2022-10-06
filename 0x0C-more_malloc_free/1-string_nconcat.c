#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string to add to @s1
 * Return: pointer to newly allocated memory,
 * which contains s1, followed by the first n bytes of s2
 * and null terminated
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s3;
	unsigned int m = 0, x = 0, y = 0;
	unsigned int i, j, length;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[x])
		x++;
	while (s2[y])
		y++;
	if (y > n)
		y = n;

	length = x + y;

	s3 = malloc(sizeof(char) * (length + 1));
	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < x; i++)
		s3[m++] = s1[i];

	for (j = 0; j < y; j++)
		s3[m++] = s2[j];

	s3[m] = '\0';
	return (s3);
}
