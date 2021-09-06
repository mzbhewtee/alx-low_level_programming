#include "main.h"
/**
* print_rev - prints a string, in reverse, followed by a new line.
* @s: input string
* return: no return
*/
void print_rev(char *s)
{
int size = 0;

while (size >= 0)
{
if (s[size] == '\0')
break;
size++;
}
for (size--; size >= 0; size--)
_putchar(s[size]);
_putchar('\n');
}
