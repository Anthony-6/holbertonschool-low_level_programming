#include "main.h"

/**
 * main - entry point
 * Return: always sucess (0)
 * this program print "_putchar"
 *
 */
int main(void)
{
int c;
char str[8] = "_putchar";

for (c = 0; str[c] != '\0'; c++)
{
_putchar (str[c]);
}
_putchar ('\n');
return (0);
}
