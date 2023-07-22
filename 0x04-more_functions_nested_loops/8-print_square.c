#include "main.h"
/**
 * print_square - print a square using character
 * @size: is the size of the square
 * Return: Always 0 (Success)
*/
void print_square(int size)
{
	int row, colum;

	if ( size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row < size; row++)
		{
			for (colum = 0; colum < size; colum++)
				_putchar('#');
			_putchar('\n');
		}
	}
}
