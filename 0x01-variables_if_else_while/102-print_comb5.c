#include <stdio.h>

/**
 * main - prints all possible combinations of two two-digit numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int k, a;

for (a = 0; k < 100; k++)
{
for (a = 0; a < 100; a++)
{
if (k < a)
{
putchar((k / 10) + 48);
putchar((k % 10) + 48);
putchar(' ');
putchar((a / 10) + 48);
putchar((a % 10) + 48);
if (k != 98 || a != 99)
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

