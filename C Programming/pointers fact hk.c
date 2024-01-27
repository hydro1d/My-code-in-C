#include <stdio.h>

void update(int *a,int *b)
{
    int add,sub;
    add=*a + *b;
    sub= *a - *b;

    if(sub<0){
        sub=-sub;
    }
    *a=add;
    *b=sub;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    printf("type of value a \n");
    scanf("%d", &a);

    printf("type of value b \n");
    scanf("%d", &b);

    update(pa, pb);
    printf("a+b hobee %d \n", a);
    printf(" modulus of a-b hobee %d \n",b);

    return 0;
}
