#include "main.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * isDigits - checks if the numbers are integers
 * @str1: the first number
 * @str2: the second number
 *
 * Return: true if strings are composed of digits
 */
bool isDigits(const char *str1, const char *str2)
{
	while (*str1)
	{
		if (!isdigit(*str1))
		{
			return (false);
		}
	str1++;
	}
	while (*str2)
	{
		if (!isdigit(*str2))
		{
			return (false);
		}
	str2++;
	}
	return (true);
}
/**
 * multiply - multiplys two numbers
 * @num1: first number
 * @num2: second number
 *
 * Return: num1 * num2
 */
int multiply(int num1, int num2)
{
	return (num1 * num2);
}
/**
 * main - prints the multiple of two numbers
 * @argc: the number of arguements
 * @argv: the array of size ac
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int result;
	int num1, num2;

	if (argc != 3 || !isDigits(argv[1], argv[2]))
	{
		printf("Error\n");
		return (98);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = multiply(num1, num2);

	printf("%d\n", result);
	return (0);
}
