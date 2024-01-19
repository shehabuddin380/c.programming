#include<stdio.h>
int main()
{
    int i,N,sum=1;
    printf("Enter N number: ");
    scanf("%d",&N);

    for(i=2;i<N;i+2)
        sum=sum*i;
    printf("sum=%d",sum);


    getch();
}
