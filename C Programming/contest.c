#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    for(int i=0;i<=9;i++){

        printf("%d X %d = %d \n",num,i+1,(i+1)*num);
    }





    return 0;
}
