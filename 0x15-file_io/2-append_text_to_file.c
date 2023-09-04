#include <stdio.h>
#include <stdlib.h>
/**
 *append_text_to_file - function that appends text at the end of a file
 *@filename:  name of the file
 *@text_content:  terminated string to add at the end of the file
 *Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int success;
	FILE *file;
	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		return (1);

	file = fopen(filename, "a");

	if (file == NULL)
		return (-1);

	success = fputs(text_content, file);

	fclose(file);

	if (success == EOF)
		return (-1);

	return (1);
}
