// This program will do selection sorting

#include<stdio.h>

int main(){
    int arr[] = {20, 26, 56, 89, 49, 20, 1, 78, 52, 47};

    
    for(int i=0; i<10; i++){
    int smallElement = i;
        for(int j=i+1; j<10; j++){
            if(arr[smallElement] > arr[j]){
                smallElement = j;
            }

        }
       int temp = arr[i];
       arr[i] = arr[smallElement];
       arr[smallElement] = temp;
    }

    for(int i=0; i<10; i++){
        printf("%d\t",arr[i]);
    }

    return 0;
}