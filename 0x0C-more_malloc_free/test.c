#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - function that concatenates two strings
 *
 * @s1: string that recieves a copy of variable s2
 * @s2: string copy in the variable s2
 * @n: bytes from s2
 *
 * Return: a pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int i = 0, j = 0, k = 0, l = 0;
    char *s3;
    if (s1 == NULL)
        k = 0;
    else
    {
        while (s1[k])
        k++;
    }
    if (s2 == NULL)
        l = 0;
    else
    {
        while (s2[l])
        l++;
    }
    if (n >= l)
        j = k + l;
    else
        j = k + n;
    s3 = malloc((k + l + 1) * sizeof(char));
    if (s3 == 0)
        return (NULL);
    while (i < (j))
    {
        if (i < k && s1 != NULL)
            s3[i] = s1[i];
        else if (s2 != NULL)
            s3[i] = s2[i - k];
        i++;
    }
    s3[i] = '\0';
    return (s3);
}