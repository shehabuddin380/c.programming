#include<stdio.h>
int main()
{
    int i,N,sum=1;
    printf("Enter n number: ");
    scanf("%d",&N);

    for(i=1;i<N;i++)
        sum=sum*i;
    printf("Sum=%d",sum);

    getch();
}
