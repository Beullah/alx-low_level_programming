#include "main.h"

/**
 * _isalpha - checks if a character is alphabetic.
 * @c: The character is to be checked.
 *
 * Return: 1 if character is letter, lowercase or upprcase, 0 otherwise.
 */

int _isalpha(int c)

{

if ((c >= 'a' && c <= 'z') ||

(c >= 'A' && c <= 'z'))

return (1);

else

return (0);

}
