//enter address of 5 people

#include<stdio.h>
#include<string.h>
typedef struct address
{
    int houseno;
    int block;
    char city[50];
    char state[50];
}add;

int main()
{
    add s1;
    s1.houseno = 21;
    s1.block = 3;
    strcpy(s1.city,"Chattogram" );
    strcpy(s1.state,"Bangladesh");


    add s2;
    s2.houseno = 20;
    s2.block = 4;
    strcpy(s2.city,"Dhaka" );
    strcpy(s2.state,"Bangladesh");

    add s3;
    s3.houseno = 41;
    s3.block = 5;
    strcpy(s3.city,"Khulna" );
    strcpy(s3.state,"Bangladesh");

    add s4;
    s4.houseno = 31;
    s4.block = 7;
    strcpy(s4.city,"Syhlet" );
    strcpy(s4.state,"Bangladesh");

    add s5;
    s5.houseno = 51;
    s5.block = 9;
    strcpy(s5.city,"Rajshahi" );
    strcpy(s5.state,"Bangladesh");


}
