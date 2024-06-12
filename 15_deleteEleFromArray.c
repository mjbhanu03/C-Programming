//This code will delete the element from the array which is selected by the user.

#include<stdio.h>

int main()
{
    int size;
    printf("Enter the size of the container:\n");
    scanf("%d",&size);
    int arr[size];

//Getting values from the user to put in the array
    for(int i=0; i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

//Printing array
    printf("Your container has these much values:\n");
    for(int i=0; i<size;i++)
    {
        printf("%d, ",arr[i]);
    }

//Asking which value they wants to delete
    int delValue, place;
    printf("\nWhich value you wants to delete:\n");
    scanf("%d",&delValue);

//Checking the place of the value user wants to delete
    for(int i=0; i<size; i++)
    { 
    if(delValue == arr[i])
    {
        place = i;
    }
    }
// Deleting the value from that array
    for(int i=place+1; i<size; i++)
    {   
        arr[i-1] = arr[i];
    }

//Priting the upadted array
    printf("Your updated array is:\n");
    for(int i=0; i<size-1; i++) 
    {
        printf("%d, ",arr[i]);
    }
}
