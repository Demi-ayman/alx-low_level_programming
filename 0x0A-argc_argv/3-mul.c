#include <stdio.h>
#include "main.h"

/**
 * main - multiplies two numbers
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int mult;

	if (argc == 3)
	{
		mult = atoi(argc[1]) * atoi(argc[2]);
		printf("%d\n", mult);
	else
	{
		printf("Error\n");
		return (1);
	}
}
