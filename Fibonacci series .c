#include<stdio.h>
int main()
{
    int frist=0,secand=1,count=0,fibo,n;
    printf("entar n: ");
    scanf("%d",&n);
    while(count<n)
    {
        if(count<=1)
            fibo=count;
        else
        {
            fibo=frist+secand;
            frist=secand;
            secand=fibo;
        }
        printf("%d ",fibo);
        count++;
    }


    getch();
}
