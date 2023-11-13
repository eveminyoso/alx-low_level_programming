#include "main.h"
/**
 *_strlen - counts the number of letters
 *@s:string passed
 *Return:number of letts
 */
int _strlen(char *s)
{
	int count, i;

	count = 0;
	for (i = 0; s[i]; i++)
	{
		count++;
	}
	return (count);
}
