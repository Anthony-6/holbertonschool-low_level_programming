#include <stdio.h>
#include <stdlib.h>
 /**
  * main - multiply two numbers
  * @argc: string
  * @argv: stringsize
  * Return: 0
  */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int a = atoi(argv[1]), b = atoi(argv[2]);

		printf("%d\n", a * b);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
