#include "main.h"
/**
 * more_numbers - prints the 10 times the numbers
 *             from 0 to 14, followed by a new line.
 * Return: Always 0.
*/
void more_numbers(void)
{
	int row, cloum;

	for (row = 0; row < 10; row++)
	{
		for (colum = 0; colum <= 14; colum++)
		{
			putchar(colum + 48);
		}
		putchar('\n');
	}
	putchar('\n');
}
