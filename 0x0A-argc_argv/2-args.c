#include <stdio.h>

/**
 * main - calcul the number of string
 * @argc: string
 * @argv: string size
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
    int print;

    for (print = 0; print < argc; print++)
    {
	printf("%s\n", argv[print]);
    }
    return (0);
}
