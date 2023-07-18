 #include "main.h"

/**
 * _isalpha - checks if the charater is lowercase or uppercase
 * @c: the charater to be checked
 * Return: 1 for  lowercase or uppercase or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 96) || (c >= 97 && c <= 122))
	{
	return (1);
	}
	return (0);
}
