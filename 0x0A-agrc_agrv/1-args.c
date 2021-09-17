#include <stdio.h>
#include "main.h"

/**Write a program that prints the number of arguments passed into it.
* followed by a new line
* @argc: number of arguments
* @argv:array of arguments
*/

int main(int argc, char* agrv[]);
{
int i;
for(i = 0; i < argc; i++)
printf("&s\n", argv[i]);
return 0;
}
