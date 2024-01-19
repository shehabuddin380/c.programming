#include<stdio.h>
int main()
{
    int num,r,sum,temp;
    printf("Enter Armstrong number: ");
    scanf("%d",&num);
    sum=0;
    temp=num;
    while(temp!=0)
    {
        r=temp%10;
        sum=sum+r*r*r;
        temp=temp/10;
    }
    if(sum == num)
            printf("Armstrong number \n");
    else
        printf("not Armstrong number \n");

    getch();
}
