#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int a = 25;
    int b = 500;
    int result;

    result=a+b;
    printf("a+b is %d \n",result);

    result=a-b;
    printf("a-b is %d \n",result);

    result=a*b;
    printf("a*b is %d \n",result);

    result=b/a;
    printf("b/a is %d \n",result);

    result =a%b;
    printf("a%%b is %d\n",result);

    return 0;
}
