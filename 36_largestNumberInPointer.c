// This code will find out largest number

#include<stdio.h>

int largestNumber(int *arr[],int *size, int *num);
int main()
{
    int arr[] = {1, 2, 3, 5, 9, 8, 7}
    int size = sizeof(arr) / sizeof(arr[0]);
    largestNumber(&arr[], &size);


}
int largestNumber(int *arr[],int *size)
{
    int num = *arr[0];
    for(int i=0; i<*size; i++)
    {
        if(num < arr[i])
        {
            num = *arr[i];
        }

    }

    printf("%d",num);
}