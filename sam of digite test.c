#include<stdio.h>
int main()
{
    int num,temp,r,sum=0;

    printf("entar any number: ");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r;
        temp=temp/10;
    }
    printf("sum is =  %d",sum);


    getch();
}
