#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter your num1: ");
    scanf("%d",&num1);
    printf("Enter your num2: ");
    scanf("%d",&num2);
    printf("Enter your num3: ");
    scanf("%d",&num3);

    if(num1>num2 && num1>num2 || num2>num1 && num2>num3 || num3>num1 && num3>num2)
    {
        printf("\n\tlarge num1 %d\n",num1);

        printf("\tlarge  num2:%d\n",num2);

        printf("\tlarge  num3: %d\n",num3);
    }
        else
            printf("\tother's Number is equal\n ");


    getch();
}
