#include "main.h"

/**
 * _isalph - Checks for alphabetic character
 * @c: The charater to be checked
 * Return: 1 for alphabetic character or 0 for anything alse
*/

int _isalph(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);

else

return (0);

}
