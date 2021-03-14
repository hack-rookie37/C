#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char s1[10] = "Hello";
    char s2[10];

    strcpy(s2, s1);

    printf("%s\n", s2);

    char *s3 = "Hi";
    char *s4 = (char *)malloc(sizeof(char) * 10);

    strcpy(s4, s3);

    printf("%s\n", s4);

    free(s4);

    return 0;
}