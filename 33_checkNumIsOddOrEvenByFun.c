// Checks number is odd or even by function

#include<stdio.h>

int check(int n);
int main()
{
    int num;
    printf("Enter Number\n");
    scanf("%d",&num);

    check(num);
}

int check(int n)
{
    if(n % 2 == 0)
    {
        printf("Number is even\n");
    }
    else
    {
        printf("Number is Odd\n");
    }
}