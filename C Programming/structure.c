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
    struct student s1;
    s1.roll = 1299;
    s1.cgpa = 3.56;
    strcpy(s1.name,"Sourabh");

    printf("Student Name = %s \n",s1.name);
    printf("Student Name = %d \n",s1.roll);
    printf("Student Name = %f \n",s1.cgpa);

    //chaile lagatar copy koree aro student der data ami input nite parbo

    struct student s2;
    s2.roll = 1242;
    s2.cgpa = 4.00;
    strcpy(s2.name,"Arni");

    printf("Student Name = %s \n",s2.name);
    printf("Student Name = %d \n",s2.roll);
    printf("Student Name = %f \n",s2.cgpa);

    struct student s3;
    s3.roll = 1241;
    s3.cgpa = 3.62;
    strcpy(s3.name,"Monisha");

    printf("Student Name = %s \n",s3.name);
    printf("Student Name = %d \n",s3.roll);
    printf("Student Name = %f \n",s3.cgpa);

    return 0;


}

