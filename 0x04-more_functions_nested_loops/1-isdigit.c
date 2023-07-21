#include "main.h"
/**
 * _isdigit - checks if input is digit between 0 - 9
 *  Description: if its bet 0 - 9 or not
 * @c: input for alphabet
 * Return: 1 if its digit, 0 if not
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
