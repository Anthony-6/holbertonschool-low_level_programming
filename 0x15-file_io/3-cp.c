#include "main.h"
#include <stdio.h>
/**
 * main - copy a the content of a file inside another file
 * @argc: number of argument needed
 * @argv: array of argument
 * Return: 0 if sucess
 */
int main(int argc, char *argv[])
{
	int close1, close2, file_from, from_to, reading = 0, writing = 0;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	from_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (from_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
	while ((reading = read(file_from, buffer, 1024)) > 0)
	{
		writing = write(from_to, buffer, reading);
		if (writing != reading || writing == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	if (reading == -1)
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
	exit(98);
	close1 = close(file_from);
	{
		if (close1 == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close1);
		exit(100);
		close2 = close(from_to);
		if (close2 == -1)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close2);
		exit(100);
	}
	return (0);
}
