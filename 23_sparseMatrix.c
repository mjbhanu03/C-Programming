// This will convert normal array to sparse array

#include <stdio.h>

int main()
{
    int arr[6][5] = 
    {
        {0, 0, 3, 2, 0},
        {4, 0, 0, 0, 9},
        {0, 0, 0, 7, 0},
        {0, 8, 0, 2, 0},
        {0, 0, 0, 0, 0},
        {0, 0, 1, 1, 0}
    };

//Count total non-zero elements
    int countCol = 0;
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(arr[i][j] != 0)
            {
                countCol++;
            }
        }
    }

//  Generate sparse array
    int sparseArr[3][countCol];
    int row = 0;
    int col = 0;
    for(int i=0; i<6; i++)
    {
        for(int j=0; j<5; j++)
        {
            if(arr[i][j])
            {
                if(arr[i][j] != 0)
                {
                    sparseArr[row][col] = i;
                    sparseArr[row+1][col] = j;
                    sparseArr[row+2][col] = arr[i][j];
                    col++;

                }
            }
        }
    }

// Printing sparse array
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<countCol; j++)
        {
            printf("%d ",sparseArr[i][j]);
        }
        printf("\n");
    }

}