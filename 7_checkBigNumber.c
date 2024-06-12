//Find the bigger number from the array
#include <stdio.h>

void checkBiggerNumber(int array[]);
int main() {
    int arr[5] = {};
    printf("Please enter 5 Numbers:");
    for (int i=0; i<=4; i++){
        scanf("%d",&arr[i]);
    }

    checkBiggerNumber(arr);
}
void checkBiggerNumber(int array[]){
    int bigNum = array[0];
    int i = 0;

    while(i<=4){
        if(bigNum < array[i]){
            bigNum = array[i];
        }
        // else{
            // array[i++];
        // }
        i++;
    }
    

    printf("%d is the Bigger Number",bigNum);
}