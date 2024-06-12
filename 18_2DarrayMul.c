// This code will multiply the 2D array

#include<stdio.h>

int main()
{
    int arr1[2][3] = {2, 3, 4, 5, 6, 7};
    int arr2[2][3] = {8, 9, 10, 11, 12, 13};

    for(int i=0; i<2; i++)
    {
        for(int j=0; j<3; j++)
        {
            printf("%d ",arr1[i][j]+arr2[i][j]);
        }
        printf("\n");
    }
}