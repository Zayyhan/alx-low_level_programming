#include "main.h"
#include <stdio.h>

/**
* _abs - computes the absolute value of an integer.
*
* @i: will be used for the argument of the function
* Return: Always 0
*/
int _abs(int i)
{
if (i > 0 || i == 0)
{
return (i);
}
else
return (i * -1);
}
