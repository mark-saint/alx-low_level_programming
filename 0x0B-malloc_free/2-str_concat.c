#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{
    char *new;
    int a = 0, b = 0, i = 0;
     while (s1[a])
        a++;
    a++;

    while (s2[b])
        b++;
    b++;

    new = malloc(sizeof(*new) * (a + b));

    *new = *s1;
    printf("%s",s1);
    while (i < b)
    {
        new[i] = s2[i];
        i++;
    }

    return (new);
}
