//1 +2+3+4+5.........n?
#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("entar n number :");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        sum=sum+i;
    }

    printf("%d",sum);

    getch();
}
