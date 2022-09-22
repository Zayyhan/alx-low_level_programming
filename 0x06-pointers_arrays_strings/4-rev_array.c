#include "main.h"

/**
* reverse_array - reverses content of an array
*
* @a: array
* @n: number of elements
* Return: void
*/

void reverse_array(int *a, int n)
{
int i;
int temp;

for (i = n - 1; i > n / 2; i--)
{
temp = a[n - 1 - i];
a[n - 1 - i] = a[i];
a[i] = temp;
}
return;
}
