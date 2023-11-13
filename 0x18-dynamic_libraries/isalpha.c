#include "main.h"
/**
 *_isalpha - checks for uppercase
 *@c:the lette
 *Return:c
 */
int _isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
