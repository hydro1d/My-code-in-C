#include<stdio.h>
#include<string.h>

//user define first
 struct student
 {
    char name [100];
    int roll;
    float cgpa;
 };

int main()
{
    struct student s1 = {"Sourabh",1299,3.56};
    printf("student roll = %d \n",s1.roll);


    return 0;
}
