#include "main.h"
/**
* _strlen - returns the length of a string.
* @s: input string.
* Return: length of a string.
*/
int _strlen(char *s)
{
int size = 0;

while (*(size + s) != '\0')
size++;
return (size);
}
