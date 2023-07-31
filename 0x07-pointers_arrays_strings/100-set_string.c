#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * set_string - sets the value of a pointer to a char
 * @s:old string
 * @to:new string
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
