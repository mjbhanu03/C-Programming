#include<stdio.h>

void storeTables(int n, int m, int number, int arr[][10]);

int main (){

int tables[4][10];
storeTables(0,10,2,tables);
storeTables(1,10,3,tables);
storeTables(2,10,4,tables);
storeTables(3,10,5,tables);

    for(int i=0; i<10; i++){
        printf("2 * %d = %d\n",i+1,tables[0][i]);
    }

    for(int i=0; i<10; i++){
        printf("3 * %d = %d\n",i+1,tables[1][i]);
    }
    
    for(int i=0; i<10; i++){
        printf("4 * %d = %d\n",i+1,tables[2][i]);
    }

    for(int i=0; i<10; i++){
        printf("5 * %d = %d\n",i+1,tables[3][i]);
    }

return 0;

}

void storeTables(int n, int m, int number, int arr[][10]){

    for(int i=0; i<m; i++){
        arr[n][i] = number * (i+1);
    }

}