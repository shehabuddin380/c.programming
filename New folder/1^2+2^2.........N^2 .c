#include<stdio.h>
int main()
{
    int i,N,sum=0;
    printf("enter n number: ");
    scanf("%d",&N);

    for(i=1;i<=N;i++)
        sum=sum+i*i;
    printf("sum=%d",sum);



    getch();
}
