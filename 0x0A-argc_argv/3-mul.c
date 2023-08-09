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
	if (argc == 3)
		printf("%d\n", atoi(argc[1]) * atoi(argc[2]));
	else
	{
		printf("Error\n");
		return (1);
	}
}
