#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	double doubleType;
	char charType;
	long int longintType;
	long long int longlongintType;
/* sizeof evaluates the size of a variable */
	printf("Size of char: %zu bytes\n", sizeof(charType));
	printf("Size of int: %zu bytes\n", sizeof(intType));
	printf("Size of long int: %zu bytes\n", sizeof(longintType));
	printf("Size of long long int: %zu byte\n", sizeof(longlongintType));
	printf("size of float: %zu bytes\n", sizeof(floatType));
	return (0);
}
