#include "main.h"
/**
* rev_string - reverses a string.
* @s: input string.
* return: no return
*/
void rev_string(char *s)
{
int size = 0, a, b;
char *x, y;

while (size >= 0)
{
if (s[size] == '\0')
break;
size++;
}
x = s;
  
for (a = 0; a < (size - 1); a++)
{
for (b = a + 1; b > 0; b--)
{
y = *(x + b);
*(x + b) = *(x + (b - 1));
*(x + (b - 1)) = y;
}
}
}
