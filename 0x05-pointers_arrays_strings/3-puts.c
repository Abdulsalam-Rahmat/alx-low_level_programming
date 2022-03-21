#include "main.h"
/**
 * _puts - prints string
 * @str: input string
 *Return: no return
 */

void _(char *str)
{
	while (*str != '\0')
	{
		_puchar(*str);
		str++;
	}
	_putchar('\n');
}
