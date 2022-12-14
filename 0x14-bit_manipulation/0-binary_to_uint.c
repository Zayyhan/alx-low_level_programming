#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: points to a string of '0' and '1' chars
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	int s, bin;
	unsigned int n = 0;

	if (b == NULL)
		return (0);

	s = 0;
	while (b[s + 1])
		s++;

	while (s >= 0)
	{
		if (b[s] == '0')
		{
			s--;
			bin++;
		}
		else if (b[s] == '1')
		{
			n = n + (1 << bin);
			s--;
			bin++;
		}
		else
			return (0);
	}
	return (n);
}
