#include "main.h"

/**
 * _strchr - function with two arguments
 * @s: char type pointer 1st argument
 * @c: char type 2nd argument
 *
 * Description: locates a character in a string
 * Return: character in string
 */
char *_strchr(char *s, char c)
{
        int i = 0;
        for (; s[i] >= '\0'; i++)
        {
                if (s[i] == c)
                        return (&s[i]);
        }
        return (0);
}
