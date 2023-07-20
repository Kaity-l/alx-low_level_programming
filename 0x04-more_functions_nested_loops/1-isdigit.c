#include "main.h"

/**
 * _isdigit - checks if c is a digit
 * @c: function parameters
 * Return: 1 if digit or 0 if not a digit
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
