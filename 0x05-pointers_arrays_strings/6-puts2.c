#include "main.h"
/**
 * puts2 - function should print only one character out of two
 * starting with the first one
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	char *c = str;
	int i = 0;

	while (*c != '\0')
	{
		c++;
		if ((*c + 48) % 2 == 0)
			_putchar(*c);
	}
	_putchar('\n');
}
