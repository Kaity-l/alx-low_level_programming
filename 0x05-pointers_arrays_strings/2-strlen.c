#include "main.h"

/**
 * _strlen - counts the length of a string
 * @s: the string to be counted
 * Return: the lenght of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		count++;
	return (count);
}
