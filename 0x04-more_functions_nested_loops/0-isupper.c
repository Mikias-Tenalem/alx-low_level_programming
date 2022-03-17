#include "main.h"
#include <stdio.h>

/**
 * _isupper - check the code.
 * Description - Checks if character is uppercase or not
 * @c - Character
 * Return: 1 for uppercase and 0 for other
 */
 int _isupper(int c)
 {
     if ( c >= A && c <= Z)
     {
         return (1);
     }
     else
     {
         return (0);
     }
 }
