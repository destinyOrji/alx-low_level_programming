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
char letters = 'a';
while (letters <= 'z')
{
if (letters != 'q' && letters != 'e')
{
putchar(letters);
}
letters++;
}
putchar ('\n');
return (0);
}
