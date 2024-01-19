#include<stdio.h>
int main()
{
    int num,sum,temp,r;
    printf("Enter your number: ");
    scanf("%d",&num);
    sum=0;
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum*10+r;
        temp=temp/10;
    }
    printf("Reverse A Number=%d\n",sum);



    getch();
}
