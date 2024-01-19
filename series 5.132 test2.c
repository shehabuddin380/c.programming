#include<stdio.h>
int main()
{
    int n,i,r=1;
    printf(" entar n number :  ");
    scanf("%d",&n);
    printf("2*4*6*.......%d=",n);

    for(i=2;i<=n;i=i+2)
    {
        r=r*i;
    }
    printf("%d",r);



    getch();
}
