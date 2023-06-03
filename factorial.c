#include<stdio.h>

int factorial(int);
int result = 1;

int main()
{   
    int num;
    printf("\nEnter a number: ");
    scanf("%d", &num);
    printf("\nFactorial of %d: %d", num, factorial(num));
    return 0;
}

int factorial(int a)
{
    result *= a--;
    if (a == 1)
        return result;
    factorial(a);
}