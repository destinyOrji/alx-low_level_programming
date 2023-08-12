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
int num;

for (num = 48; num <= 57; num++)
{
putchar(num);
if (num == 57)
{
continue;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
