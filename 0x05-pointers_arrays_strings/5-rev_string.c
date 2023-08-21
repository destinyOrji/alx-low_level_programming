#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int destiny = 0;
	int i;

	while (s[destiny] != '\0')
	destiny++;
	for (i = 0; i < destiny; i++)
	{
		destiny--;
		rev = s[i];
		s[i] = s[destiny];
		s[destiny] = rev;
	}
}

