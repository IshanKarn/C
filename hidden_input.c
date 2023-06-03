#include<stdio.h>
#include<string.h>

int main()
{
    // char inpt[]="";
    // char c;
    // while ((c=getchar())!='.')
    //     printf("%c",c);
    char c;
    char temp_pass[]="";
    while ((c=getchar())!=0)
        strncat(temp_pass,&c,1);
    printf("%s",temp_pass);
    return 0;
}