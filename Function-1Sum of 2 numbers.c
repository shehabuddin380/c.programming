#include<stdio.h>
int sum(int a,int b);
{
    return a+b ;
}
int main()
{
    int num1,num2;

    printf("entar two numbers: ");
    scanf("%c %c",&num1,&num2);

    printf("the sum is:%d\n",sum(num1,num2));

    getch();
}
/*int sum(int a,int b);
{
    return (a+b);
}*/
