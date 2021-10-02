#include <stdio.h>

/**
 * main - print alphabet from z to a in lowercase
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
char ch;

for (ch = 'z'; ch >= 'a'; ch++)
{
putchar(ch);
}
putchar('\n');
return (0);
}
