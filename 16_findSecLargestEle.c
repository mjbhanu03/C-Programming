// This code will find second largest element of array

#include <stdio.h>

int main()
{
    int arr[] = {10, 25, 56, 89, 822, 78, 33};
    int arrSec[2];
    int largestEle = arr[0];
    int secLargest = arr[0];

// Checking first largest element
    for(int i=0; i<7; i++)
    {
        if(arr[i] > largestEle)
        {
            secLargest = largestEle;
            largestEle = arr[i];
        }
    }
    printf("%d",secLargest);
}