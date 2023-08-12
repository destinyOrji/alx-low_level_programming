#include <stdio.h>
/**
 *main - Entry point
 *Description 'print alphabets except q and e'
 *Return: Always 0
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
