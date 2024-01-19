#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Entar your num1: ");
    scanf("%d",&num1);
    printf("Entar your num2: ");
    scanf("%d",&num2);

    if(num1>num2)
        printf("num1:%d",num1);
   else if(num1<num2)
        printf("num2=%d",num2);
        else
            printf("Enter your number uqual");



    getch();
}
