//Create a structure called "Student" with members name, age, and total marks.
//  Write a C program to input data for two students, display their information, and find the average of total marks.


#include <stdio.h>
#include <string.h>

int main(){
    struct Student {
        int id;
        char firstname[50];
        char lastname[50];
        int age;
        float totalMarks;

    };

    struct Student student[2];
    float Marks = 0.0;

    for(int i=0; i<2; i++)
    {

        printf("Student%d Firstname:\n",i+1);
        scanf("%s", student[i].firstname);

        printf("Student%d Lastname:\n",i+1);
        scanf("%s", student[i].lastname);

        printf("Student%d Enter age:\n",i+1);
        scanf("%d",&student[i].age);
        
        printf("Student%d Enter marks:\n",i+1);
        scanf("%f",&student[i].totalMarks);

        Marks += student[i].totalMarks; 
    }

    printf("Students Information:\n");
    for(int i=0; i<2; i++)
    {
        printf("Student%d Id: %d\n",i+1,i+1);
        printf("Student%d Firstname: %s\n",i+1,student[i].firstname);
        printf("Student%d Lastname: %s\n",i+1,student[i].lastname);
        printf("Student%d Age: %d\n",i+1,student[i].age);

    }

    float average_marks = Marks / 2;
    printf("\n Average Marks of Students: %.2f\n",average_marks);

    return 0;

}