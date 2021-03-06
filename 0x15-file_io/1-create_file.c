#include "main.h"
/**
 * create_file - create a file
 * @filename: the name of the file
 * @text_content: the content of the file
 * Return: -1/0 if fails or empty, and 1 if it's work
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, _strlen(text_content));

	close(fd);
	return (1);
}
/**
 * _strlen - returns the length of a string
 * @s: pointer to int b
 * Return: The length of the string c
 */

int _strlen(const char *s)
{
	int c;

	for (c = 0; s[c] != '\0'; c++)
		;
	return (c);
}
