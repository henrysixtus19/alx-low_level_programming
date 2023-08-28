#include "main.h"
#include <unistd.h>

/**
 * -putchar - writes the character c to stdout
 *  @c: the character to print
 *
 *  return: om success 1
 *  on error, is returned and errno is set appropriately
 */
int _putchar(char c)
{
       	return (write(1, &c, 1));
}
