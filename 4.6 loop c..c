#include<stdio.h>
int main()
{
    int n=5;
    int i=1;
    for(; i<=10; i=i+1)
    {
        printf("%d*%d= %d\n",n,i,n*i);
    }


    getch();
}
