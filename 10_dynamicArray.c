#include <stdio.h>

int main(){
int n;

printf("please enter number of peoples");
scanf("%d",&n);

int arr[n];
printf("Please enter %d peoples name",n);
for(int i=0; i<n; i++){
    scanf("%d",&arr[i]);
}
}