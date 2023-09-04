#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
/**
 *read_textfile - function that reads a text file and prints it
 *@filename: file
 *@: number to be printed
 *Return: amount of bites
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t br, bw, tbr = 0;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = (char *)malloc(letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}
	while ((br = read(fd, buffer, letters)) > 0)
	{
		bw = write(STDOUT_FILENO, buffer, br);
		if (bw == -1 || bw != br)
		{
			close(fd);
			free(buffer);
			return (0);
		}
		tbr += bw;
	}
	close(fd);
	free(buffer);
	return (tbr);
}
