#include<stdio.h>
int main()
{
    int a[]={10,52,62,52,26,72,92,52,42,52},sum=0,i;

    for(i=0;i<10;i++)
    {
        sum=sum+a[1];
    }
    printf("the sum is: %d\n",sum);
    printf("Entar avarej number: %.2f",(float)sum/10);




    getch();
}
