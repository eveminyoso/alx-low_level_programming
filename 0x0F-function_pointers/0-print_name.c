#include "function_pointers.h"
#include <stdio.h>
/**
 *print_name - printing name
 *@name: the name
 *@f: fuction pointer
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
