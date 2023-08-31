#include <stdio.h>
/**
 *binary_to_uint - function that converts a binary number
 *@b:A pointer to a string containing a binary number
 *Return: The converted unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, i = 0;

	if (b == NULL)
	{
		return (0);
	}


	while (b[i] != '\0')
	{
		if (b[i] == '0' || b[i] == '1')
		{
			result = result * 2 + (b[i] - '0');
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (result);
}
