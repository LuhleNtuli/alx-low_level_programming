#include <stdio.h>
/**
 *main - alphabet in lowercase, and then in uppercase, followed by a new line
 *
 *Return: Always 0 (Success)
 */

int main(void)
{
char a, b;
while (a <= 'z')
{
putchar(a);
a++;
}
while (b <= 'z')
{
putchar(b);
b++;
}
putchar('\n');
return (0);
}
