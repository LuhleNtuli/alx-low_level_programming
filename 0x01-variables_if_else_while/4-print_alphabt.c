#include <stdio.h>
/**
 *main -  alphabet in lowercase, followed by a new line
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
int h;
for (h = 'a'; h <= 'z'; h++)
{
if ((h != 'e' && h != 'q'))
{
putchar(h);
}
}
printf("\n");
return (0);
}
