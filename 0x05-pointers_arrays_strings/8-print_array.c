#include <stdio.h>
#include "main.h"

/**
* print_array - prints elements of an array of integers
*
* @a: array
* @n: number
* Return: void
*/

void print_array(int *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
if (i != n - 1)
printf("%d, ", a[i]);
else
printf("%d", a[i]);
}
putchar(10);

return;
}
