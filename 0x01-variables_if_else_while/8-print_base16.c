#include <stdio.h>
/**
 * main - print numbers in lowercase hexadecimal
 *
 * Return: 0
 */
int main(void)
{
int l = 0x30;

int a = 0x61;

while (l <= 0x39)
{
putchar(l);
l++;
}
while (a <= 0x66)
{
putchar(a);
a++;
}
putchar (10);

return (0);
}
