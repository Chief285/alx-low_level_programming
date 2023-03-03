#include "main.h"

/**
 * _strcat - concatenates 2 strings
 * @dest: destination string
 * @src: the source string
 * Return: the destination string
 */

char *_strcat(char *dest, char *src)
{
	int k;
	int n;

	k = 0;
	while (dest[k] != '\0')
	{
		k++;
	}
	n = 0;
	while (src[n] != '\0')
	{
		dest[k] = src[n];
		k++;
		n++;
	}
	dest[k] = '\0';
	return (dest);
}
