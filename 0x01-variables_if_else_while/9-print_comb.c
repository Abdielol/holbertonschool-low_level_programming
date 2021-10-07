#include <stdio.h>
/**
 * main - print numbers 0 to 9
 *
 * Return: 0
 */
int main(void)
{
int a = '0';

int b = 1;

while (a <= '9')
{
if (b == 0)
{
putchar(',');
putchar(' ');
}

b = 0;

putchar(a);

a++;

}
putchar (10);

return (0);
}
