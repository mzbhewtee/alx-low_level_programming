#include "main.h"
/**
* _puts -  prints a string, followed by a new line.
* @str: input string
* return: no return
*/
void _puts(char *str)
{
int size = 0;

while (size >= 0)
{
if (str[size] == '\0')
{
_putchar('\n');
break;
}
_putchar(str[size]);
size++;
}
}
