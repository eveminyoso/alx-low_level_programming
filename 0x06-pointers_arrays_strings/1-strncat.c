#include "main.h"
#include <stdio.h>
/**
 * *_strcat - concatinates two strings
 * @dest: THe first string
 * @src: The second string
 *
 * Return:The result
 */
char *_strcat(char *dest, char *src)
{
	char *result = dest;

	/*Moving the dest pointer to the end of the string*/

	while (*dest != '\0')
	{
		dest++;
	}

	/*Copying the src string to the end of dest*/

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/*Adding the terminating null byte to the end of the concatinated string*/

	*dest = '\0';
	return (result);/*Returning the starting address of the concatinated string*/
}
