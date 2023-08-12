#include <stdio.h>
/**
* main - the start of the program main function
*
* Return: Always return zero
*
* betty style doc for function main goes there
*/
int main(void)
{
int a, g;

for (a = 48; a <= 56; a++)
{
for (g = 49; g <= 57; g++)
{
if (g > a)
{
putchar(a);
putchar(g);
if (a != 56 || g != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
