// This code will do sum of rows and cols

#include<stdio.h>

int main()
{
        int arr[4][3] = {

        {1, 2, 4},
        {3, 5, 6},
        {9, 1, 1},
        {2, 5, 4}
};
    

    for(int i=0; i<4; i++)
    {
    int colAddition = 0; 
        for(int j=0; j<3; j++)
        {
            colAddition += arr[i][j];
        }

        printf("%d is the addition of col %d \n",colAddition, i+1);
    }
    printf("\n");
    for(int i=0; i<3; i++)
    {
    int rowAddition = 0; 
        for(int j=0; j<4; j++)
        {

            rowAddition += arr[j][i];
        }
        printf("%d is the addition of row %d \n",rowAddition, i+1);
    }
}