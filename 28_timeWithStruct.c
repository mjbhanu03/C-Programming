//Take time hours, minutes and seconds of two members and print it in a proper format 
#include <stdio.h>

int main()
{
    struct Time {
        int hours;
        int minutes;
        int seconds;
    };

    struct Time m1, m2, results;

    printf("Enter Hours, Minutes & Seconds of Member 1:");
    scanf("%d%d%d",&m1.hours,&m1.minutes,&m1.seconds);

    printf("Enter Hours, Minutes & Seconds of Member 2:");
    scanf("%d%d%d",&m2.hours,&m2.minutes,&m2.seconds);

    results.seconds = m1.seconds + m2.seconds;
    results.minutes = m1.minutes + m2.minutes + results.seconds / 60;
    results.hours = m1.hours + m2.hours + results.minutes / 60;


    printf("\n Result time: %2d : %2d : %2d ",results.hours,results.minutes,results.seconds);
    return 0;
}