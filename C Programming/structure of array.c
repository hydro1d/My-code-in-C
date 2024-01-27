#include<stdio.h>
#include<string.h>

//user define first
 struct student
 {
    int roll;
    float cgpa;
    char name [100];

 };

int main()
{
    struct student sweB[50];
    sweB[0].roll = 1299;
    sweB[0].cgpa = 3.56;
    strcpy(sweB[0].name,"Sourabh");

    sweB[1].roll = 1117;
    sweB[1].cgpa = 3.23;
    strcpy(sweB[1].name,"Alvi");

    printf("Student Name = %s \n",sweB[1].name);
    printf("Student Name = %d \n",sweB[1].roll);
    printf("Student Name = %f \n",sweB[1].cgpa);


    return 0;
}
