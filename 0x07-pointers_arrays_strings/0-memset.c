#include "main.h"

/**
 * _memset - fill a block of memory with a specfic value
 *@s: srating address of memory to be filled
 *@b: the desired value
 *@n: the number of bytes to be changed
 *
 * Return: changed array with the new value of n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
