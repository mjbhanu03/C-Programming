#include<stdio.h>

int main(){
    int size1,size2,size3;
//creating array one
    printf("Enter the size of the Container\n");
    scanf("%d",&size1);
    int arr1[size1];

    printf("Please enter %d elements one by one in the container\n",size1);
    for(int i=0; i<size1; i++){
        scanf("%d",&arr1[i]);
    }

//creating array two
    printf("Enter the size of the Container 2\n");
    scanf("%d",&size2);
    int arr2[size2];

    printf("Please enter %d elements one by one in the container 2\n",size2);
    for(int j=0; j<size2; j++){
        scanf("%d",&arr2[j]);
    }

//merging both array
    size3 = size1 + size2;
    int arr3[size3],array1;

    for( array1=0; array1<size1; array1++ ){
        arr3[array1] = arr1[array1];
    }

    for(int array2=0; array2<size2; array2++ ){
        arr3[array1] = arr2[array2];
        array1++;
    }

//printing third array
    printf("Merged array is\n");
    for(int arrayPrint=0; arrayPrint<size3; arrayPrint++){
        printf("%d\t",arr3[arrayPrint]);
    }

//sorting in descending order
    int temp;
    for(int a=0; a<=size3; a++){
        for(int b=0; b<=size3-a-1; b++){
            if(arr3[b]<arr3[b+1]){
                temp = arr3[b];
                arr3[b] = arr3[b+1];
                arr3[b+1] = temp;
            }
        }
    }

//printing third array
    printf("\nMerged array after sorting\n");
    for(int arraySort=0; arraySort<=size3; arraySort++){
        printf("%d\t",arr3[arraySort]);
    }
    return 0;
}