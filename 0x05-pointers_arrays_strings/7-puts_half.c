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
	int i;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	for (i = len/2 + 1; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
