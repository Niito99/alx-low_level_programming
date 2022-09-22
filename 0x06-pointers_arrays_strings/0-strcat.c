#include "main.h"

/**
 * *_strcat - the function appends the second string to the first one
 * @dest: the first string is allocated to this variable
 * @src: the second string is allocated to this variable
 * Return: the pointer to the final value of dest after concatenation
 */

char *_strcat(char *set1, char *set2) /*the function append the second parameter to the first */
{
    int i = strlen(set1); /* setting the length of each string to the var i and j*/
    int j = strlen(set2);
    int a;
    int b;

    for (a = 0; a <= j; a++)
    {
        b = i + a;
        *(set1 + b) = set2[a];
    }

    return (set1);

}
