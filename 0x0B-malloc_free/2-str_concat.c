#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 *
 * @s1: first string
 * @s2: second string to add to s1
 * Return:  pointer should point to a newly allocated space in memory
 * which contains the contents of s1
 * followed by the contents of s2, and null terminated
 * return NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int index, c_index = 0, length = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		length++;

	s3 = malloc(sizeof(char) * length + 1);

	if (s3 == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		s3[c_index++] = s1[index];

	for (index = 0; s2[index]; index++)
		s3[c_index++] = s2[index];

	return (s3);
}
