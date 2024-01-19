//1+1/2+1/3+1/4+....n;;
#include<stdio.h>
int main()
{
    double n,i=1,sum=0;
    printf("enter n number:  ");
    scanf("%lf",&n);
    printf("1+1/2+1/3+1/4+....%d=",n);

    for(;i<=n;i++)
    {
        sum=sum+(1/i);
    }
    printf("%lf\n",sum);

    getch();
}
