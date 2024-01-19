//1+1/2+1/3+1/4
#include<stdio.h>
int main()
{
    double n,i,sum=0;
    printf("enter the number's: ");
    scanf("%lf",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+(1/i);
        if(i==1)
            printf("\n1 + ");
        else if(i==n)
            printf("(1/%lf) ",i);
        else
            printf("(1/%lf) + ",i);

    }
    printf(" =%.2lf",sum);







    getch();
}
