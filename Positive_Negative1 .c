#include<stdio.h>
int main()
{
    int num;
    printf("entar your number: ");
    scanf("%d",&num);

    if(num>0)
        printf("postive");
    else if(num<0)
        printf("nagative");
    else
        printf("number is ziro");


    getch();
}
