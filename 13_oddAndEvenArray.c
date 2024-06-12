// This will convert one array to odd and even into 2 separete array

#include <stdio.h>

int main()
{
    int arr[7] = {11, 28, 30, 49, 58, 63, 77};
    int oddArray[10];
    int evenArray[10];
    int j = 0;
    int k = 0;
    for(int i=0; i<7; i++){
        if(arr[i]%2 == 0)
        {
            evenArray[j] = arr[i];
            j++;
        }
        else
        {
            oddArray[k] = arr[i];
            k++;
        }
    }
//This for loop will print even array
    printf("Even Array:");
    for(int i = 0; i<j; i++)
    {
        printf("%d, ",evenArray[i]);
    }
    
    printf("\nOdd Array:");
    for(int i = 0; i<k; i++)
    {
        printf("%d, ",oddArray[i]);
    }
    
}