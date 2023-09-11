#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
int r, s;

for (r = 48; r <= 56; r++)
{
for (s = 49; s <= 57; s++)
{
if (s > r)
{
putchar(r);
putchar(s);
if (r != 56 || s != 57)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
