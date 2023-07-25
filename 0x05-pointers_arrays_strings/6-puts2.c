#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		str++;
		if ((*str + 48) % 2 == 0)
			_putchar(*str);
	}
	_putchar('\n');
}
