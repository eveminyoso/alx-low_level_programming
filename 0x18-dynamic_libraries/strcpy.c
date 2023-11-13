#include "main.h"
/**
 *_strcpy - copies a string
 *@dest:copy to
 *@src:copy from
 *Return:pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (original_dest);
}
