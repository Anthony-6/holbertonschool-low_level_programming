#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/**
 * main - added positive number
 * @argc: string
 * @argv: string size
 * Return: 0/1
 */
int main(int argc, char *argv[])
{

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	else
	{
		int i = 1, sum = 0, j, lenght = strlen(argv[i]);

		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < lenght; j++)
			{
				if (isdigit(argv[i][j]) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		return (0);
	}
}
