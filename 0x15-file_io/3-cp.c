#include "main.h"
#include <stdio.h>
int main(int argc, char *argv[])
{
    int reading = 0;
    int file_from = open(argv[1], O_RDONLY);
    int from_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
    char *buffer = malloc(1024);

    if (buffer == NULL)
    return (0);

    if(argc != 3)
    {
    dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
    exit(97);
    }
    if(reading < 0)
    {
    dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
    exit(98);
    }

    while ((reading = read(file_from, buffer, 1024)) > 0)
    {
        if (file_from < 0 || write(file_from, buffer, reading) != reading)
    dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
    exit(99);
    }

    if(file_from < 0 || from_to < 0)
    {
        if (file_from < 0)
    dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",file_from);
    exit(100);

    if (from_to < 0)
    dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",from_to);
    exit(100);
    }
    return(0);
}