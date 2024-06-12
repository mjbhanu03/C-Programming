// This program will check the how many times number repeated in the array 
#include <stdio.h>

int main(){
    int num;
    printf("Plese enter the number you want to store in the container\n");
    scanf("%d",&num);

// Creating array
    int arr[num];
    // int n = sizeof(arr)/sizeof(arr[0]);

    printf("Please enter %d elements to store in the container\n\n",num);
    for(int i=0; i<num; i++){
        scanf("%d",&arr[i]);
    }
//Taking size for unique array
    int count = 0;
    for(int i=0; i<num; i++){
    int isUnique = 1;
        for(int j=0; j<i; j++){
            if(arr[i] == arr[j]){
                isUnique = 0;
                break;
            }
        }
        
            if(isUnique){
                count++;
            }
    }
        

// Taking out unique values from the old array to the new array
    int uniqueArray[count];
    int uniqueIndex = 0;
    for(int i=0; i<num; i++){
        int uniqueElement = 1;
        for(int j=0; j<i; j++){
            if(arr[i] == arr[j]){
                uniqueElement = 0;
                break;
            }
        }
        if(uniqueElement){
            uniqueArray[uniqueIndex++] = arr[i]; 
        }
    }

//Checking Frequency Of Original Array
    for(int i=0; i<count; i++){
    int freq = 0;
        for(int j=0; j<n; j++){
            if(arr[j] == uniqueArray[i]){
                freq++;
            }
        }
        printf("%d is reapeated %d times\n",uniqueArray[i],freq);


    }

}