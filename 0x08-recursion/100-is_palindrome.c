#include "main.h"
int sl(char *s)
{
    if (*s == '\0')
    {
        return (0);
    }
    return (1 + sl(s + 1));
}
    int palindrome_check (char *s)
{
    if (*s == s[sl (s)-1] && s = '\0')
    {
        return (1);
        else return (0);
    }
}