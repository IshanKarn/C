#include<stdio.h>

void fib(int, int);
int main()
{
    int a=0, b=1;
    // printf("%d %d",a,b);
    fib(a,b);
    return 0;
}
void fib(int a, int b)
{
    static int c;
    c = a + b; 
    printf("%d ",c);
    if (c<=100)
    fib(b, a+b);
}