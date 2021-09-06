#include "main.h"
/**
* puts2 - prints every other character of a string
* starting with first character, followed by a new line.
* @str: input string
* return: no return
*/
void puts2(char *str)
{
int size = 0;

while (size >= 0)
{
if (str[size] == '\0')
{
_putchar('\n');
break;
}
if (size % 2 == 0)
_putchar(str[size]);
size++;
}
}
