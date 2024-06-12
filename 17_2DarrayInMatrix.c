// Print 2D Array in Matrix

#include<stdio.h>

int main()
{
    int col,row;
    printf("Please Enter Rows & Columns\n");
    printf("Column\n");
    scanf("%d",&col);
    printf("Row\n");
    scanf("%d",&row);
    int arr[col][row];

// Getting the input from the user
    for(int i=0; i<col; i++)
    {
        for(int j=0; j<row; j++)
        {
            scanf("%d\t",&arr[i][j]);
        }
    }
//Printing the array
    for(int i=0; i<col; i++)
    {
        for(int j=0; j<row; j++)
        {
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

}