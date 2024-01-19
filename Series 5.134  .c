//1^2*2^2*3^3*.....n
#include<stdio.h>
int main()
{
    int n,i,r=1;
    printf("enta n number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        r=r*i*i;

    }
    printf("=%d",r);


    getch();
}
