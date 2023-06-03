#include <stdio.h>
#include <string.h>

int main()
{
    char string[] = "";
    char x = 'a';
    strncat(string,&x,1);
    char y = 'b';
    strncat(string,&y,1);
    printf("%s",string);
    return 0;
}

// Reference: https://www.educative.io/blog/concatenate-string-c