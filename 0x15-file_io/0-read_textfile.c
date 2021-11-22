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
	int one;
	char *buff;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);
	buff = malloc(sizeof(char) * letters);
	one = read(fd, buff, letters);
	if (one < 0)
	{
		free(buff);
		return (0);
	}
	close(fd);
	one = write(STDOUT_FILENO, buff, one);
	if (one < 0)
	{
		free(buff);
		return (0);
	}
	free(buff);
	return (one);
}
