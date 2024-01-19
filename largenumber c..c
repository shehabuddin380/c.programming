#include<stdio.h>
int main()
{
    int num1,num2;
    printf("entar first number: ");
    scanf("%d",&num1);

    printf("entar second number: ");
    scanf("%d",&num2);

    if(num1>num2)
        printf("large 2=%d\n");
    else if (num1<num2)
        printf("large=%d\n");
    else
        printf("number is equal");



    getch();
}
