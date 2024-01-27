#include<stdio.h>
#include<string.h>

//user define first
typedef struct student
 {
    int roll;
    float cgpa;
    char name [100];

 }stu ;
 typedef struct softwareengineeringstudent
 {
    int roll;
    float cgpa;
    char name [100];

 }swe ; //just short koree felse value

int main()
{
 swe s1;
 s1.roll = 1299;
 s1.cgpa = 3.56;
 strcpy(s1.name,"Sourabh");

 printf("Roll of the student is %d \n",s1.roll);
 printf("CGPA of the student is %f \n",s1.cgpa);
 printf("CGPA of the student is %s \n",s1.name);

 return 0;

}

