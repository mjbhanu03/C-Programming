//This code will do sum of diagonals of matrix
#include<stdio.h>

int main()
{
    int arr[4][3] = {

        {1, 2, 4},
        {3, 5, 6},
        {9, 1, 1},
        {2, 5, 4}
};
    
    int add = 0;
    for(int i=0; i<3; i++)
    {
        
            add += arr[i][ 2 - i];
            // printf("%d = i,%d = j",i,j);
        
    }
    printf("%d",add);

}