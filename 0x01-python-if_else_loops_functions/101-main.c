#include <stdio.h>
#include "101-remove_char_at.c"

int main(void)
{
    char s1[] = "Best School";
    char s2[] = "Chicago";
    char s3[] = "C is fun!";
    char s4[] = "School";
    char s5[] = "Python";

    printf("%s\n", remove_char_at(s1, 3));
    printf("%s\n", remove_char_at(s2, 2));
    printf("%s\n", remove_char_at(s3, 0));
    printf("%s\n", remove_char_at(s4, 10));
    printf("%s\n", remove_char_at(s5, -2));

    return 0;
}
