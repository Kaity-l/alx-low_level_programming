#include "main.h"

/**
 * _isupper - check if letter is upper case
 * @c: function parameter
 * Return: 1 for letter is upper case or 0 for not upper case
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);

}
