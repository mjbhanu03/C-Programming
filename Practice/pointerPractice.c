#include <stdio.h>

void main(){

    char person[20] = "Jay";
    int age = 21;
    int dob = 27022003;

    char *person_name = person;
    int *person_age = &age;
    int *person_dob = &dob;

    printf("Here, Person's name is %s\n", person_name);
    printf("Here, Person's name is %s\n", person);
    printf("Here, Person's name is %d\n", age);
    printf("Here, Person's name is %d\n", *person_age);
    printf("Here, Person's name is %d\n", dob);
    printf("Here, Person's name is %d\n", *person_dob);
}
