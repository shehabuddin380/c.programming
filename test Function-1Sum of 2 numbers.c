#include<stdio.h>
int main()
{
    int num1,num2;
    printf("Enter two numbers : ");
    scanf("%d%d",&num1,&num2);
    int rslt=sum(num1,num2);
    printf("Sum = %d",rslt);
}
int sum(int a,int b)
{
    return a+b;
}
