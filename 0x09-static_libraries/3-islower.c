#include "main.h"
#include <stdio.h>
/**
 *_islower - Check the letters
 *@c: the character will be checked
 * Return: 0
 */
int _islower(int c)
{
if (c >= 97 && c <= 122)
{
return (1);
}
return (0);
}
