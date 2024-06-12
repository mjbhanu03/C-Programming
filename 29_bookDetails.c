// Stores Details of 3 books and show which one is cheap and which one is costly

#include<stdio.h>

int main()
{
    struct Books {
        char title[150];
        char author[50];
        int price;
    };

    struct Books b[3];

    for(int i=0; i<3; i++)
    {
        printf("Enter Book %d Title:\n",i+1);
        scanf("%s",b[i].title);
        
        printf("Enter Book %d Author:\n",i+1);
        scanf("%s",b[i].author);
        
        printf("Enter Book %d price:\n",i+1);
        scanf("%d",&b[i].price);

    }

    int low = b[0].price, lowerNum;
    int high = b[0].price, highNum;



    for(int i=0; i<3; i++)
    {
        if(low > b[i].price)
        {
            lowerNum = i;
        }
        else if(high < b[i].price)
        {
            highNum = i;
        }
    }

printf("Lowest Price Book Title: %s\n",b[lowerNum].title);
printf("Lowest Price Book Price: %d\n\n",b[lowerNum].price);

printf("Costly Price Book Title: %s\n",b[highNum].title);
printf("Costly Price Book Price: %d\n",b[highNum].price);

}