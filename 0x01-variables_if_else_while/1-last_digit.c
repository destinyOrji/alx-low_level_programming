#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Return: always 0
 * betty style doc for function main goes there
 */
int main(void)
{
int n;
int id;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
id = n % 10;
if (id > 5)
{
printf("last digit of %d is %d and is greater than 5\n", n, id);
}
else if (id == 0)
{
printf("last digit of %d is %d and is 0\n", n, id);
}
else if (id < 6 && id != 0)
{
printf("last digit of %d is %d and is less than 6 and not 0\n", n, id);
}
return (0);
}
