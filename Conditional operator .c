#include<stdio.h>
int main()
{
    int num1,num2,large;
    printf("Enter your number: ");
    scanf("%d",&num1);

    printf("Enter your number: ");
    scanf("%d",&num2);

    large= num1>num2 ? num1 : num2 ;
    printf("Enter large number=%d",large);




    getch();
}
