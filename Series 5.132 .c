//1*2*3*4*....*n
#include<stdio.h>
int main()
{
    int i,n,r=1;
    printf("entar n number : ");
    scanf("%d",&n);
     printf("1*2*3*......*%d=",n);
    for(i=1; i<=n; i++)
    {
        r=r*i;

    }
    printf("%d",r);


    getch();
}
