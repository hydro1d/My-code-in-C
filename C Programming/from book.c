// sharier subin  book cp part 2
#include<stdio.h>
int main()
{
    char small_letter,capital_letter;

    printf("Please enter a small number:");
    small_letter = getchar();
    capital_letter = small_letter-32;
    printf("the capital letter is %c\n", capital_letter);

    return 0;
}
