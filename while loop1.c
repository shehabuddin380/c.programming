#include<stdio.h>
int main()
{
    int num,p,r,sum=0;
    printf("Enter Any number: ");
    scanf("%d",&num);
    p=num;
    while(p!=p)
    {
        r=p/10;
        sum=sum+r*r*r;
        p=p/10;
    }
    if(sum==num)
        printf("not ");
        else
            printf("yes ");


   getch();


}
