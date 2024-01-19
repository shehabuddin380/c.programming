#include<stdio.h>
int main()
{
    int m,n=5,i;
    m=0;
    for(i=1;i<=10;i++)
    {
        m=m+n;
        printf("%d*%d=%d\n",n,i,m);
    }


    getch();
}
