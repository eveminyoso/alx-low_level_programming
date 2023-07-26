#include "main.h"
#include <stdio.h>
/**
 * _strcmp - compares two given strings
 * @s1:String one
 * @s2:String two
 *
 * Return: Their difference in ASCII values
 */
int _strcmp(char *s1, char *s2)
{
	/*Checking how the two strings compare*/

	while (*s1 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	/*Their difference in ascii values*/
	return (*s1 - *s2);
}
