#include "main.h"


/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Returns: empty output
 */

void times_table(void)
{
	int x, y, z;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	z = x * y;
	_putchar("2%d", z);
	}
	_putchar('\n');
	}
}
