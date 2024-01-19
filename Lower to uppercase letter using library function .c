#include<stdio.h>
int main()
{
    char lower,upper;
    printf("ente any lowercase letter: ");
    scanf("%c",&lower);

    upper=toupper(lower);
    printf("upper number:%c",upper);



    getch();
}
