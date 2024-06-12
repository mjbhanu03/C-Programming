// This code will find out the two elements from the array which are add of this two is equal to sum

#include <stdio.h>

int main()
{
    int arr[] = {1, 2 , 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;

//Printing array for user
    printf("This is your array\n");
    for(int i=0; i<10; i++)
    {
        printf("%d ",arr[i]);
    }
    
    int sum;
    printf("\nPlease, give me a number to find out 2 valid elements\n");
    scanf("%d",&sum);

    for(int i=0; i<9; i++)
    {
        for(int j=i+1; j<9; j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                printf("\nThis is your 2 Elements\n%d + %d = %d",arr[i],arr[j],sum);
                break;
            }
        }
    }
}