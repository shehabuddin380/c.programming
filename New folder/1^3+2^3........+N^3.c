#include<stdio.h>
int main()
{
    int i,N,sum=0;
    printf("enter N number: ");
    scanf("%d",&N);

    for(i=1;i<N;i++)
        sum=sum+1/i;
    printf("sum=%d",sum);


    getch();
}
