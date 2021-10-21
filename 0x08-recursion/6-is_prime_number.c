#include "main.h"

/**
 * 
 * 
 * 
 *
 */
    int prime_check (int g, int num)
   {
    if (num % g == 0)
    {
        return (0);
    }
    if (g == num/2)
    {
        return (1);
    }
    if (num < 2)
{
    return (0);
}
if (num == 2)
{
    return (1);
}
    return (prime_check(g+1,num));
}
int is_prime_number (int n)
{
    return (prime_check(2, n));
}