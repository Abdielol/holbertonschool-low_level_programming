#include "main.h"
/**
 * print_alphabet_x10 - print the alphabet 10 times
 *
 */
void print_alphabet_x10(void)
{
int l = 97;
int c;

for (c = 0; c < 10; c++)
{

while (l <= 122)
{
_putchar(l);
l++;
}
l = 97;

_putchar(10);
}

}
