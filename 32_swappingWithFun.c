// Swapping with function

#include<stdio.h>
int swap(int x, int y);
int main()
{
    int a = 5, b = 6;
    swap(a,b);
}
int swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;

    printf("%d = a, %d = b",x,y);
}