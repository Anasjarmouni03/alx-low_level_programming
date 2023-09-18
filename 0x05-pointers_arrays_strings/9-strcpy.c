#include "main.h"

/**
 * char *_strcpy - a function that copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int A = 0;
	int B = 0;

	while (*(src + A) != '\0')
	{
		A++;
	}
	for ( ; B < A ; B++)
	{
		dest[B] = src[B];
	}
	dest[B] = '\0';
	return (dest);
}
