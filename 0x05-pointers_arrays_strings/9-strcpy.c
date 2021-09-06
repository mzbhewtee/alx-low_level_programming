#include "main.h"
#include <stdio.h>
/**
* _strcpy - copies the string pointed to by src,
* including the terminating null byte, to the
* buffer pointed to by dest.
* @dest: destination.
* @src: source.
* Return: the pointer to dest.
*/
char *_strcpy(char *dest, char *src)
{
int size = 0;

while (size >= 0)
{
*(dest + size) = *(src + size);
if (*(src + size) == '\0')
break;
size++;
}
return (dest);
}
