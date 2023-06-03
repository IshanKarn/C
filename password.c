#include<stdio.h>

int main()
{   
    char pass[] = "ab@12";
    char inpt[] = "";
    char temp;
    temp = getchar();
    if (*pass==temp)
    {
        printf("%s",inpt);
        printf("Valid");
    }
    else
    {
        printf("%c",temp);
        printf("Invalid");
    }
        
    return 0;
}