#include<stdio.h>
int main()
{
    int x,y,i,n,sum,temp;
    scanf("%d",&x);
    scanf("%d",&y);
    if(x>y)
    {
        temp=y;
        y=x;
        x=temp;
    }
    if(x%2==0)
    {
        x++;
        n = x;
    }
    else
    {
        n=x+2;
    }
    for(i=n;i<y;i+=2)
    {
        sum+=i;
    }
    printf("%d\n",sum);



    return 0;
}
