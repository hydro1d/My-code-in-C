/* #include<stdio.h>
int main()
{
    int num;

    printf("num size is %d \n",sizeof(int));

    return 0;
}
*/

#include<stdio.h>
int main()
{

    double pi = 3.1416;

    int *ptr;

    ptr = &pi;

    printf("value of pi is %lf \n",pi);
    printf("Value of pi %lf \n ", *ptr);

    return 0;
}
