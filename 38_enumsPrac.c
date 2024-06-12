#include<stdio.h>

int main()
{
    enum level
    {
        LOW = 1,
        MEDIUM,
        HIGH

    };

    enum level myVar = MEDIUM;

    switch(myVar)
    {
        case 1:
        printf("Low Level");
        break;

        case 2:
        printf("Medium Level");
        break;

        case 3:
        printf("High Level");
        break;
    }
}