//This code will make lower triangle 0
#include <stdio.h>

int main()
{
  
    int arr[5][5] = 
    {
        {2,   3,   4,   5,   6},
        {8,   8,   9,   1,   2},
        {9,   4,   5,   6,   7},
        {8,   6,   0,   7,   6},
        {4,   7,   2,   6,   1}    
    };

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<i; j++)
        {
            arr[i][j] = 0;
        }
    }

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

}