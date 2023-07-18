#include "main.h"

/**
 * print_sign - make +- for a number
 * @n: the num to be checked
 * Return: 1 for a num < zero or 0 for a num = zero or -1 for a num > zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar(43);
	return (1);
	}
	if (n < 0)
	{
	_putchar(45);
	return (-1);
	}
	else
	{
	_putchar(48);
	return (0);
	}
}
