#include "main.h"

/**
 *_memcpy - a function that copies memory area
 *@dest: where it is stored
 *@src: where it is copied
 *@n: number of bytes
 *
 *Return: cpoied memory with n byted changed
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
