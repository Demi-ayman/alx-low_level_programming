#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i, n;

	for (i = 0; src[i] != '\0'; i++)
		;
	i++;
	for (n = 0; n < i; n++)
		dest[n] = src[n];
	return (dest);
}
