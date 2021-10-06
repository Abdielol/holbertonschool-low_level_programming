#include "main.h"
/**
 * main - print the alphabet
 *
 * Return: 0
 */
int print_alphabet(void)
{
int a = 97;
while (a <= 122)
{
_putchar(a);
a = a + 1;
}
_putchar('\n');

return (0);

}
