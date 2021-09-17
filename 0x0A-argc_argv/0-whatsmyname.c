#include <stdio.h>

/** Write a program that prints its name, followed by a new line.
* @argc: number of argument
* @argv: array of arguments
*
*Return: Always 0 (Success)
*/
int main(int argc __attribute__((unused)), char *agrv[])

{
printf("%s\n", *argv);

return (0);
}
