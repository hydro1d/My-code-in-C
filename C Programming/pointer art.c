// char 1 bytes and int or float 4 bytes

#include<stdio.h>
int main()
{
    int age = 22;
    int _age =23;
    int *ptr = &age;
    int *_ptr = &_age;

    printf("difference %u \n",ptr-_ptr);
    printf("comparison %u \n",ptr==_ptr);

    return 0;
}