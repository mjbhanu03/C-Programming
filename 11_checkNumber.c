// Check the 'n' is repeated N number of times in Array

#include<stdio.h>

void checkNumberRepeatation(int array[], int num, int arraySize);

int main() {
    int arr[] = {1, 2, 3, 1, 15, 2, 56, 56, 56, 1, 1, 2};
    int number;
    int sizeOfArray = sizeof(arr) / sizeof(arr[0]);

    printf("Please enter a number: ");
    scanf("%d", &number);

    checkNumberRepeatation(arr, number, sizeOfArray);

}

void checkNumberRepeatation(int *array, int num, int arraySize) {
    int count = 0;
    for(int i = 0; i < arraySize; i++) {
        if(num == array[i]) {
            count++;
        }
    }

    if(count != 0) {
        printf("%d Number of times repeated\n", count);
    } else {
        printf("Number is not repeated\n", count);
    }
    printf("Thank You! Visit Again\n");
}
