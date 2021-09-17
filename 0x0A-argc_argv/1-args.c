#include <stdio.h>
#include "main.h"

/**Write a program that prints the number of arguments passed into it.
* followed by a new line
* @argc: number of arguments
* @argv:array of arguments
* Return: Always 0 (success)
*/

int main(int argc, char* agrv[] __attribute__((unused)));
{

printf("%d\n", argc - 1);

return 0;
}
