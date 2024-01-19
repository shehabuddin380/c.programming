#include<stdio.h>
int main()
{
    int n,i;

    for(n=1;n<=200;n++)
    {
        for(i=1;i<=10;i++)
        {
            printf("%d*%d\t=%d\t\n",n,i,n*i);
        }
    }


    getch();
}
