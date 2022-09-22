#include "main.h"

/**
 * *_strcat - the function appends the second string to the first one
 * @dest: the first string is allocated to this variable
 * @src: the second string is allocated to this variable
 * Return: the pointer to the final value of dest after concatenation
 */

char *_strcat(char *dest, char *src) /*the function append the second parameter to the first */
{
    int i = strlen(dest); /* setting the length of each string to the var i and j*/
    int j = strlen(src);
    int a;
    int b;

    for (a = 0; a <= j; a++)
    {
        b = i + a;
        *(dest + b) = src[a];
    }

    return (dest);

}
