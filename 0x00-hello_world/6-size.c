#include <stdio.h>

/**
 * main - this main function is to print the stated text
 *
 * Return: 0 when successful
 */

int main(void)
{	printf("size of a char: %lu byte(s)", sizeof(char));
	printf("Size of an int: %lu byte(s)", sizeof(int));
	printf("size of a long int: %lu byte(s)", sizeof(long int));
	printf("size of a long long int: %lu byte(s)", sizeof(long long int));
	printf("size of a float: %lu byte(s)", sizeof(float));
	return (0);

}
