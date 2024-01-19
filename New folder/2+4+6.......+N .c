#include<stdio.h>
int main()
{
    int i,N,sum=0;
    printf("Enter n number: ");
    scanf("%d",&N);

    for(i=2;i<N;i++)
        sum=sum+i;
    printf("Sum= %d",sum);


    getch();
}
