#include <stdio.h>
/**
 * main - print numbers in lowercase hexadecimal
 *
 * Return: 0
 */
int main(void)
{
int l = 0x30;

while (l <= 0x39)
{
putchar(l);
l++;
}
putchar (10);

return (0);
}
