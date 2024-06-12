#include <stdio.h>

int main()
{
    int arr[10] = {2,5,10,3,4,7,6,8,9,1};

    for(int i=0; i<10; i++)
    {
        for(int j=i; j>0; j--)
        {

            if(arr[j] < arr[j-1])
            {
            int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
        for(int k=0; k<10; k++)
        {
            printf("%d, ",arr[k]);
        }
        printf("\n");
    }
    return 0;
}