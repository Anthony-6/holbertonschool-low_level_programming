#include "main.h"
#include <stdlib.h>
/**
 * 
 * 
 * 
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int m = 0, i = 0, j = 0, k = 0, l = 0;
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
    {
        j = k + n;
    }
        m = k + n + l + 1;
    s3 = malloc(m);
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