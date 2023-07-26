#include "main.h"
#include <stdio.h>
/**
 * *_strncpy - copies the last line of the string
 * @dest:Where the line will be copied to and still be the first address
 * @src: The line to be copied
 * @n: the number of characters
 *
 *
 * Return: The result
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *result = dest;/*Saving the first address*/

	/*Copying up to n characters from src to dest*/

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (result);
}
