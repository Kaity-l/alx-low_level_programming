#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: thhe string to be printed
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int n;
	int count = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		count++;
	n = (count - 1) / 2;
	for (i = n + 1 ; str[i] != '\0' ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
