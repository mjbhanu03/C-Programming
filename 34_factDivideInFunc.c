// First find fact and than divide that by that number
#include<stdio.h>

int fact(int n);
int main()
{
    int ans = 0;
    // for(int i = 1; i <= 5; i++)
    // {
    //     ans += fact(i) / i ;
    // }
    ans = (fact(1) / 1) + (fact(2) / 2) + (fact(3) / 3) + (fact(4) / 4) + (fact(5) / 5);

    printf("your answer: %d",ans);
}

int fact(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
    {
        fact *= i;
    }
    
    return fact;
}