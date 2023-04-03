#include "main.h"
/**
 * _memset - is a function with 3 arguments
 * @s: char type pointer 1st argument
 * @b: char type 2nd argument
 * @n: int type unsigned 3rd argument
 *
 * Description: fills memory with a constant byte
 * Return: a pointer to the memory area
 */
void *_memset(void *s, int c, size_t n)
{
	unsigned int index;
	unsigned char *memory = s, value = c;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}
