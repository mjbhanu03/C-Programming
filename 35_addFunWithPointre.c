#include<stdio.h>

int add(int *a1, int *b1);
int main()
{
    int a = 5;
    int b = 8;
    int c = add(&a, &b);
    printf("%d, %d, %d",a,b,c);
}

int add(int *a1, int *b1)
{
    *a1 = 56;
    *b1 = 44;
    return *a1 + *b1;
}