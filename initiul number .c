#include<stdio.h>
int main()
{
    int initialnum,finalnum,temp,r,i,sum=0;
    printf("initial value: ");
    scanf("%d",&initialnum);

    printf("final value: ");
    scanf("%d",&finalnum);

    for(i=initialnum;i<=finalnum;i++)
    {
        temp=i;
        while(temp!=0)
        {
            r=temp%10;
            sum=sum+r*r*r;
            temp=temp/10;
        }
        if(sum==i)
            printf("%d\t",i);
        sum=0;
    }


    getch();
}
