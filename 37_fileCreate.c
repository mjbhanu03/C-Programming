#include<stdio.h>

int main ()
{
    FILE *fptr;
//To write the data, this will delete old data write new data (If file will not exist than it will create)
    // fptr = fopen("trial.txt","w");

//To append the data, this will attach old data with new data (If file will not exist than it will create)
    // fptr = fopen("trial.txt","a");

//fprintf to write directly into the file
    // fprintf(fptr,"Hey How's You?");

//To read the data
    fptr = fopen("trial.txt","r");
    char myData[100];

    
    if(fptr == NULL)
    {
        printf("Sorry, we can't able to open any file");
    }
    else{
        while (fgets(myData, 100, fptr))
        {
            printf("%s",myData);
        }
    }

    fclose(fptr);
}