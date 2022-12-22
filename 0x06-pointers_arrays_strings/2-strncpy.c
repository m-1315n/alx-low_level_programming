#include "main.h"
/**
 * _strncpy - fuction that copies a string
 * @dest: pointer to destination char
 * @src: pointer to source char
 * @n: maximum number of bytes
 * Return: returns
 */

char *_strncpy(char *dest, char *src, int n);

{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
