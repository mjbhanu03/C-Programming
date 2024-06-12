// Normal Function

#include <stdio.h>

int add(int x, int y);
int main(){
    int a =55, b=6;
    
    printf("%d",add(a,b));
}

int add(int x, int y)
{
    int c = x + y;

    return c;
}