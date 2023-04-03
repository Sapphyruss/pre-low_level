#include <stdlib.h>
#include "main.h"
/**
 * - strchar - locates a character in a string
 * @s : the string to check
 * @c : the character we are looking for 
 * return : a pointer to the 1st occurance of the character @c in the string @s
 * return NULL if the character is not found 
 */

char *_strchar(char *s, char c)
{
	while (*S)
	{
		if (*s != c )
			s++ ;
		else
			return (s);
	}
	if ( c == '\0')
	      return (s) ;
              return (NULL);
}	      

