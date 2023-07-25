#include "main.h"
/**
 * print_rev - imprime en reversa
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
	int i;

	for (i = sizeof(s) - 2; i >= 0; i--)
	{
		_putchar(*(s + i));
	}
}
