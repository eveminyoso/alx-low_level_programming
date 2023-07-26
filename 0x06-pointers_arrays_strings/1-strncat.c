#include "main.h"
#include <stdio.h>
/**
 * *_strncat - Concatinates two strings with n bytes
 * @dest:The first string
 * @src: The second string with n bytes instead of null byte at the end
 * @n: Bytes contained in string src
 *
 * Return: The result beginning with dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;/*Saving the starting address*/

	/*Moving dest to the end of the string*/

	while (*dest != '\0')
	{
		dest++;
	}

	/*Copying src up to n bytes to the end of string dest*/

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	/*Adding the terminating value at the end of the concatinated string*/
	*dest = '\0';

	return (result);/*Return the stsrting address of the concatinated string*/
}
