#include "main.h"
/**
 * _abs - Computes the absolute value of an integer
 * @b: Number to be computed
 * Return: Absolute value of number or zero
 */
int _abs(int b)
{
if (b < 0)
{
int abs_com;

abs_com = b * -1;
return (abs_com);
}
return (b);
}
