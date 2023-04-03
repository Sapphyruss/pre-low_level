#include "main.h"
/**
 * - strchar - locates a character in a string
 * @s : the string to check
 * @c : the character we are looking for 
 * return : a pointer to the 1st occurance of the character @c in the string @s
 * return NULL if the character is not found 
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return ('\0');
}
