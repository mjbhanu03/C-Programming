//This will check is any number majorly repeated in array

#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 2, 1, 0, 1, 1, 1, 1, 20};
    int size = 6 ;

    for(int i=0; i<11; i++)
    {
    int count = 0;
        for(int j=0; j<11; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
            }
        }

        if(count >= size)
        {
            printf("%d is the majroly repeated\n",arr[i]);
        }
    }
    
}