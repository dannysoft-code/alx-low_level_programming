#include "main.h"

/**
 * _strlen - this return the length of the string
 * @s: this is a string
 *
 * return the length of the string
 */
int _strlen(char *s)
{
int i;

i = 0;

while (s[i] != '\0')
{
i++;

}
return (i);
}
