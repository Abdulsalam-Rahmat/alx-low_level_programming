#include "main.h"

/**
 * main - Entry point
 * Description: a function that print 10 times the alphabet in lowercase.
 * Return: Nothing
 */

void print_alphabet_x10(void)
{
	char i;
	int j;

	for (j = 0; j <10; j++)
	{
		for (i = 'a'; i <= 'z' ; i++)
			_putchar(i);
		_putchar('\n');
	}