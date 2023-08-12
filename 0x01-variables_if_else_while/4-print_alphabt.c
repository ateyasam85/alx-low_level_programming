#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*Description: 'This is the program'
*Return: Always 0 (success)
*/
int main(void)
{
char i, e, q;
e = 'e';
q = 'q';
for (i = 'a'; i <= 'z'; i++)
{
if (i != e && i != q)
putchar(i);
}
putchar('\n');
return (0);
}
