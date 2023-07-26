#include "main.h"
#include <ctype.h>
/**
 * *cap_string - Converts the first character of a word to upppercase
 * @str: the string
 *
 * Return:The result
 */
char *cap_string(char *str)
{
	int capitalize_next = 1;/*Initislized to 1 for checking whether first character capitalized*/
	char *ptr = str;

	while (*ptr)
	{
		if (isspace(*ptr) || *ptr == ',' || *ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' || *ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
			capitalize_next = 1;
		}
		else if (capitalize_next)
		{
			*ptr = toupper(*ptr);
			capitalize_next = 0;
		}
		else
		{
			*ptr = tolower(*ptr);
		}
		ptr++;
	}

	return (str);
}
