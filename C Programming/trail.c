#include<stdio.h>

int main()
{
    char ch;

    printf("Shona,Enter a character: ");
    scanf("%c", &ch);

    printf("%c is %s digit.\n", ch, (ch >= '0' && ch <= '9') ? "a" : "not a");

    return 0;
}
