#include "main.h"

/**
 * swap_int - this  changes the position of the value
 *@a: this is the first poniter
 *@b: this is the second poniter
 */

void swap_int(int *a, int *b)
{
int c;
c = *a;
*a = *b;
*b = c;
}
