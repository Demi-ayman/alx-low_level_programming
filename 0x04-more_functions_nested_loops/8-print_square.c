#include "main.h"
/**
 * print_square - print a square using character
 * @size: is the size of the square
 * Return: Always 0 (Success)
*/
void print_square(int size)
{
	int row, colum;

	for (row = 0; row < size; row++)
	{
		for (colum = 0; colum < size; colum++)
			_putchar(35);
		_putchar('\n');
	}
}
