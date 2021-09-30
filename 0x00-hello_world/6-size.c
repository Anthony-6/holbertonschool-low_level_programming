#include<stdio.h>
/*
 * main - Entry point
 * printf - p
 * Return: Always 0(Success)
*/
int main(void)
{
int intType;
long int longintType;
long long int longlongintType;
char charType;
float floatType;

printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of long: %zu bytes\n", sizeof(longintType));
printf("Size of long long int: %zu bytes\n", sizeof(longlongintType));
printf("Size of char: %zu byte\n", sizeof(charType));
printf("Size of float: %zu byte\n", sizeof(floatType));
return (0);
}
