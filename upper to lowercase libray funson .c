#include<stdio.h>
int main()
{
    char upper,lower;
    printf("ente any upper letter: ");
    scanf("%c",&upper);

    lower=tolower(upper);
    printf("lower number: %c ",lower);


    getch();
}
