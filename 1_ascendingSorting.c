
#include <stdio.h>

int main() {
    
    int arr[] = {4, 5, 3, 6, 1, 7, 2, 8};

    for (int i=0; i<8; i++)
    {
        for (int j=i+1; j<8; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp; 
            }
        }

        for(int k=0; k<8; k++)
        {
            printf("%d, ",arr[k]);
        }
        printf("\n");
    }

}