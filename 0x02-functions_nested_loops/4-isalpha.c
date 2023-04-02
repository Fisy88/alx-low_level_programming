#include "main.h"

/**
 * _isalpha - test for alphabetic character
 * @c: it's character to check
 * Return: 1 for alphabetic char or 0 for anything else
 */

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}

