#include<stdio.h>
int main()
{
    int num,p,r,sum=0;
     printf("entar num: ");
    scanf("%d",&num);
    p=num;
    while(p!=0);
    {
        r=p%10;
        sum=sum+r*r*r;
        p=p/10;
    }
    if(sum==num)
        printf("%d",num);
    else
        printf("%d",num);

    getch();
}
