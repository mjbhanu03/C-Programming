// This will find out the difference between two dates

#include<stdio.h>

int main()
{
    struct Date 
    {
        int day;
        int month;
        int year;
    };

    struct Date m[2];

        printf("Enter Joining Date:");
        scanf("%d%d%d",&m[0].day,&m[0].month,&m[0].year);
    
        printf("Enter Leaving Date:");
        scanf("%d%d%d",&m[1].day,&m[1].month,&m[1].year);
    

    int diff = m[1].year - m[0].year;

    printf("%d",diff);
}