#include "main.h"
/**
 * puts_half - a function that prints half of a string
 * if odd len, n = (length_of_the_string - 1) / 2
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
	int len = 0;
	int i, n, a;

	for (i = 0; str[i] != 0; i++)
		len++;
	if ( len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);
	_putchar('\n');
}
