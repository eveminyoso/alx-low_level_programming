#include "main.h"
#include <stdio.h>
/**
 * *_strcpy - copying function
 * @dest:destination
 * @src: what to be copied
 * Return: Copy of src
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	/*dest[++i] = '\n';*/
	return (dest);
}
