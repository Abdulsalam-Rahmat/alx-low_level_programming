#include "main.h"
/**
 * main - Entry point
 * Description: A program that prints the alphabets in lower case;
 * Return: Always 0.
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
