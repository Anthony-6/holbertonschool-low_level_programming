#include "main.h"
#include <stdio.h>
int main(int argc, char *argv[])
{
	int close1, close2, file_from, from_to, reading = 0, writing = 0;
	char buffer[BUFSIZ];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from < -1)
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
		if (writing == -1 || writing != -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	close1 = close(file_from);
	close2 = close(from_to);
	if (close1 < 0 || close2 < 0)
	{
		if (close1 < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close1);
		exit(100);

		if (close2 < 0)
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", close2);
		exit(100);
	}
	return (0);
}
