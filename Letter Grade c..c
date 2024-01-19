#include<stdio.h>
int main()
{
    int mark;
    printf("entar mark: ");
    scanf("%d",&mark);

    if (mark>100 || mark <0)
        printf("inbaild mark");

    else if (mark>=80 && mark<=100)
        printf("A+");

    else if (mark>=70 && mark<=79)
        printf("A");

    else if (mark>=60 && mark<=69)
        printf("A-");

    else if (mark>=50 && mark<=59)
        printf("b");

    else if (mark>=40 && mark<=49)
        printf("c");

    else if (mark>=33 && mark<=39)
        printf("d");

        else
            printf("fail");




    getch();
}
