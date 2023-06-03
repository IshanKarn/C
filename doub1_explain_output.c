#include<stdio.h>
#include<string.h>

int main()
{
    char inpt[]="";
    char c;
    // while ((c=getchar())!=0x0A)
    while ((c=getchar())!=EOF)
        putchar(c);
    return 0;
}