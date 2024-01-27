//enter address of 5 people
#include<stdio.h>
#include<string.h>

struct address {
    int houseno;
    int block;
    char city[50];
    char state[50];
};

void printAdd(struct address add);

int main() {
    struct address adds[5];

    printf("Enter for person 1 \n");
    scanf("%d", &adds[0].houseno);
    scanf("%d", &adds[0].block);
    scanf("%s", adds[0].city);
    scanf("%s", adds[0].state);

    printf("Enter for person 2 \n");
    scanf("%d", &adds[1].houseno);
    scanf("%d", &adds[1].block);
    scanf("%s", adds[1].city);
    scanf("%s", adds[1].state);

    printf("Enter for person 3 \n");
    scanf("%d", &adds[2].houseno);
    scanf("%d", &adds[2].block);
    scanf("%s", adds[2].city);
    scanf("%s", adds[2].state);

    printf("Enter for person 4 \n");
    scanf("%d", &adds[3].houseno);
    scanf("%d", &adds[3].block);
    scanf("%s", adds[3].city);
    scanf("%s", adds[3].state);

    printf("Enter for person 5 \n");
    scanf("%d", &adds[4].houseno);
    scanf("%d", &adds[4].block);
    scanf("%s", adds[4].city);
    scanf("%s", adds[4].state);

    printAdd(adds[0]);
    printAdd(adds[1]);
    printAdd(adds[2]);
    printAdd(adds[3]);
    printAdd(adds[4]);

    return 0;
}

void printAdd(struct address add) {
    printf("Address is %d, %d, %s, %s \n", add.houseno, add.block, add.city, add.state);
}
