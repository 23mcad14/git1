#include <stdio.h>

int biggest(int, int, int);
int factorial(int);

int main()
{
    int a = 6, b = 5, c = 4;
    int num = 5;

    int max = biggest(a, b, c);
    printf("Biggest number = %d\n", max);

    int fact = factorial(num);
    printf("Factorial = %d\n", fact);

    return 0;
}
