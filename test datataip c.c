
// (+,-,*,/)test

#include<stdio.h>
int main()
{
    int num1,num2;
    printf("entar a number: ");
    scanf("%d",&num1);
    printf("entar another number: ");
    scanf("%d",&num2);
    printf("%d+%d= %d\n",num1,num2,num1+num2);
    printf("%d-%d= %d\n",num1,num2,num1-num2);
    printf("%d*%d= %d\n",num1,num2,num1*num2);
    printf("%d/%d= %d\n",num1,num2,num1/num2);
    printf("%d % %d= %d\n",num1,num2,num1%num2);



    getch();
}
