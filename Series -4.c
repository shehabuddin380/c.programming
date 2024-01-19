#include<stdio.h>
int main()
{
    int n,i,result=1;
    printf("Inter a number: ");
    scanf("%d",&n);

    for(i=1;i<=n;i=i+2)
    {
        result=result*i*i*i;
    }
    printf("result=%d",result);




    getch();
}
