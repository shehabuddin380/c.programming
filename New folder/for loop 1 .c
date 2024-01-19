#include<stdio.h>
int main()
{
    int i,n,sum=0;
    //clrsr();

    printf("enter n number: ");
    scanf("%d",&n);

    for(i=1;i<n;i++)
        sum=sum+i;
        printf("\n sum of all number from 1 to %d is=%d\n",n,sum);




    getch();
}
