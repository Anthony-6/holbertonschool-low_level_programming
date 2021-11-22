#include "main.h"
/**
 * read_textfile - read a file and print it with the number of char
 * @filename: name of the file you want to see
 * @letters: number of letters
 * Return: the text and the number of char or 0/-1 if it fails or empty
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff = malloc(sizeof(char) * letters);

	if (!buff)
	{
		return (0);
		free(buff);
	}
	fd = open(filename, O_RDONLY, 0600);
	write(fd, buff, letters);
	fd = read(fd, buff, letters);
	fd = write(STDOUT_FILENO, buff, letters);
	if (fd < 0)
	{
		return (0);
	}
	return (fd);
	free(buff);
}
