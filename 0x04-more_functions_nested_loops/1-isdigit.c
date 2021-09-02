#include "main.h"
/**
*_isdigit - Shows 1 if the input is a
* digit (0 through 9). Another cases, shows
* 0
*
* @c: input number
*
* Return: 1 for a number (0 to 9). 0 for the rest.
*/
int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
