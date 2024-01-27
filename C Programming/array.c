#include<stdio.h>

int main()
{
    float price[3];
     printf("Enter item 1 \n");
     scanf("%f",&price[0]);

     printf("Enter item 2 \n");
     scanf("%f",&price[1]);

     printf("Enter item 3 \n");
     scanf("%f",&price[2]);

     printf("total price: %f \n",price[0]+price[1]+price[2]);

   return 0;
}
