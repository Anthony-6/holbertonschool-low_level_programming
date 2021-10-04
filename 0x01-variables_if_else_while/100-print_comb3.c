#include <stdio.h>

/**
* main - entry point
* print number from 0 to 99 but without repetition
* Returne - always sucess (0)
*/
int main()
{
int n1;
int n2;

for(n1 = '0'; n1 <= '9'; n1++)
{
for(n2 = '0'; n2 <= '9'; n2++)
{  
if(n1<n2)
{
putchar(n1);
putchar(n2);
if(n1 != '8')
{
putchar (',');
putchar (' ');
}
}
}
}
putchar ('\n');
return (0);
}
