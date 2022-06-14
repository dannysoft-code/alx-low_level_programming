#include "main.h"

/**
 * _strlen - return the length of the string
 * @s: this is a string
 *
 * Return: the length of the string
 */

int _strlen(chars *s)
{
int no_of_chars;
int track;

for (no_of_chars = 0, track = 0; *(s + track) != '\0'; track++)
{
no_of_chars++;

}
return (no_of_chars);
}
