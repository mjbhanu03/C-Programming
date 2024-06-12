// This program will find the minimum number and Maximum number from the container

#include <stdio.h>

int main(){

    int arr[] = {11, 5, 14, 2, 9, 9, 4, 78};
    int minNumber,maxNumber;

    for(int i=0; i<sizeof(arr)/sizeof(arr[0]); i++){
        
        if(arr[i] < minNumber)
        {
            minNumber = arr[i];
        }

        if(arr[i] > maxNumber)
        {
            maxNumber = arr[i];
        }
    }

    printf("%d is the minimum number of the array.\n%d is the maximum number of the array.",minNumber,maxNumber);
    return 0;
}