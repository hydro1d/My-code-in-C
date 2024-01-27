#include<stdio.h>
int main()
{
    int voter[5];
//input
    int *ptr = &voter[0];
    for(int i=0;i<5;i++){
        printf("%d index: \n",i);
        scanf("%d",(ptr+i));
    }
//output
    for(int i=0;i<5;i++){
        printf("%d index: %d \n",i,(*ptr+i));
    }
    return 0;
}
