#include "main.h"
/**
 *error_exit - error output
 *@code: codechecker
 *@format: format
 *@arg: arguement
 */
void error_exit(int code, const char *format, const char *arg)
{
	dprintf(STDERR_FILENO, format, arg);
	exit(code);
}
/**
 *main - copies and prints
 *@argc: arguement count
 *@argv:arguement array
 *Return:0
 */
int main(int argc, char *argv[])
{
	const char *file_from = argv[1];
	const char *file_to = argv[2];
	int fd_from, fd_to;
	char buffer[1024];
	ssize_t bytes_read, bytes_written;

	if (argc != 3)
	{
		error_exit(97, "Usage: cp file_from file_to\n", NULL);
	}
	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		error_exit(98, "Error: Can't read from file %s\n", file_from);
	}
	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);
	if (fd_to == -1)
	{
		close(fd_from);
		error_exit(99, "Error: Can't write to file %s\n", file_to);
	}
	while ((bytes_read = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);

		if (bytes_written == -1)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Can't write to file %s\n", file_to);
		}

		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Write incomplete\n", NULL);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit(98, "Error: Can't read from file %s\n", file_from);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
	{
		error_exit(100, "Error: Can't close fd\n", NULL);
	}

	return (0);
}
