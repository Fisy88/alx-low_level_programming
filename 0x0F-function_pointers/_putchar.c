#include <unistd.h>

/**
 * _putchar - write character c to stdout
 *  @c: a character to print
 *  return: success 1, on error -1 returned, and errno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
