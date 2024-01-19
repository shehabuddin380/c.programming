#include<stdio.h>
int main ()
{
    float marks;
    printf("entar your number: ");
    scanf("%f",&marks);

    if(marks>=80)
        printf("A+\n");
    else if(marks>=70)
        printf("A \n");
    else if(marks>=60)
        printf("A-\n");
    else if(marks>=50)
        printf("B-\n");
    else if(marks>=40)
        printf("c \n");
    else if(marks>=33)
        printf("d \n");
    else
        printf("fail\n");



    getch();
}
