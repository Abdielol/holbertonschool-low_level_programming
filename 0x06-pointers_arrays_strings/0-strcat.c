#include "main.h"

/**
 *_strcat - append two strings
 *@dest: string
 *@src: append to string
 *Return: dest
 */
char *_strcat(char *dest, char *src)
{
char *ptro = dest;

while (*ptro != '\0')
{
ptro++;
}
while (*src != '\0')
{
*ptro = *src;
ptro++;
src++;
}
*ptro = '\0';

return (dest);
}
