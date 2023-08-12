#include <stdio.h>
#include <stdlib.h>

char *remove_char_at(char *str, int n)
{
    if (str == NULL || n < 0)
        return str;

    int len = 0;
    while (str[len] != '\0')
        len++;

    if (n >= len)
        return str;

    for (int i = n; i < len - 1; i++)
        str[i] = str[i + 1];
    str[len - 1] = '\0';

    return str;
}

