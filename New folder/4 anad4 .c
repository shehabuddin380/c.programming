#include<stdio.h>
int main()
{
    int i,N,sum=0;

    printf("Enter N number: ");
    scanf("%d",&N);

    for(i=4;i<=N;i+4)
        sum=sum+i;

    printf("Sum=%d",sum);



    getch();
}
