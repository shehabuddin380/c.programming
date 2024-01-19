#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter num1: ");
    scanf("%d",&num1);
    printf("Enter num2: ");
    scanf("%d",&num2);

    if(num1>num2)
    {
        printf("good morning\n",num1);
        printf("Shihab Ahmed\n",num1);
    }
    else if(num1<num2)
    {
        printf("good evining\n",num2);
        printf("shihab ahmed\n",num2);

    }
    else
        printf("not morning or evining shihab ahmed");



    getch();
}
