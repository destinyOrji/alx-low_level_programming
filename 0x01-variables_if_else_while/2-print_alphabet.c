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
char destiny = 'a';
while (destiny <= 'z')
{
putchar(destiny);
destiny++;
}
putchar('\n');
return (0);
}
