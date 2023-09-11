#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
char mk;

for (mk = 'z'; mk >= 'a'; mk--)
{
putchar(mk);
}
putchar('\n');
return (0);
}
