// This code will insert value between the sorted array

#include <stdio.h>

int main(){
    int size;
    printf("Please enter the size of container\n");
    scanf("%d",&size);
    int arr[10];

//This will take elements from the user
    for(int i=0; i<size; i++)
    {
        printf("Element Num %d:",i+1);
        scanf("%d",&arr[i]);
    }

//This will take the extra element from the user
int extraElement;
printf("Please enter the element you want to add\n");
scanf("%d",&extraElement);

// This will make sorted array
    for(int i=0; i<size; i++)
    {
        for(int j=i+1; j<size; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
// Finding out the place to where the element to put
int place = 0;
for(int i=0; i<size; i++)
{
    if(extraElement > arr[i])
    {
        place++;
    }
}
// Generating space to take the extra element in the loop
for(int i=size-1; i>=place; i--)
{
    arr[i+1] = arr[i];
}
// Putting that element on that place
arr[place] = extraElement;

// Printing the array after extra element added
for(int i=0; i<size+1; i++)
{
    printf("%d, ",arr[i]);
}

}