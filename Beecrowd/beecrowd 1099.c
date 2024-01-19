#include<stdio.h>
int main()
{
    int n,x,y,i,sum;
    scanf("%d",&n);
    while(n>0)
    {
        scanf("%d %d",&x,&y);
        if(x>y)
        {
            i=x;
            x=y;
            y=i;
        }
        sum=0;
        for(i=x+1;i<y;i++)
        {
            if(i%2!=0)
            {
                sum+=i;
            }
        }

        printf("%d\n",sum);


        n--;
    }

    return 0;
}
