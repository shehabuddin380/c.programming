#include<stdio.h>
int main()
{
    int num,temp,sum,r;
    printf("Enter number: ");
    scanf("%d",&num);
    temp=num;
    sum=0;
    while(temp!=0)
    {
        r=temp % 10;
        sum=sum+r;
        temp=temp/10;
    }
    printf("sum=%d",sum);


    getch();
}
