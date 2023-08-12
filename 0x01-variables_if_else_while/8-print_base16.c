#include <stdio.h>
/**
* main - the start of the program main function
*
* Return: Always return zero
*
* betty style doc for function main goes there
*/
int main(void)
{
int b;
int a;

for (b = 48; b <= 57; b++)
{
putchar(b);
}
for (a = 97; a <= 102; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}
