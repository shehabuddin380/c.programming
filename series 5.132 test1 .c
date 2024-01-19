#include<stdio.h>
int main()
{
    int n,i,r=1;
    printf(" entar n number :  ");
    scanf("%d",&n);
    printf("1*3*5*.......%d=",n);
    for(i=1;i<=n;i=i+2)
    {
        r=r*i;
    }
    printf("%d",r);

    getch();
}
