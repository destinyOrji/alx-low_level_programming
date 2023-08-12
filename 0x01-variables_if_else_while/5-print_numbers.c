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
int num = 0;
while (num <= 9)
{
putchar (num + '0');
num++;
}
putchar ('\n');
return (0);
}
