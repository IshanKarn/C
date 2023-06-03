#include<stdio.h>

int range, f;
int count = 0;
int fibonacci(int,int);

int main()
{
    printf("\nEnter number of fibonnaci numbers: ");
    scanf("%d", &range)
    printf("\nFibonacci numbers are: ");
    fibonacci(0,1);
    return 0;
}

int fibonacci(int a, int b)
{   
    printf("%d", a);
    count++;
    if (count == range)
        return 0;
    fibonacci(b,a+b);
}