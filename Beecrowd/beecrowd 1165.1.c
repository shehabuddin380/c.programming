#include<stdio.h>
int main()
{
    int x,n,i,j,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum=0;
        scanf("%d",&x);
        if(x<4)
        {
            printf("%d eh primo\n",x);
        }
        else{
            for(j=2;j<x;j++)
            {
                if(x%j==0)
                {
                    sum=1;
                    break;
                }
                else sum=2;
            }

        }
        if(sum==1)
        {
            printf("%d nao eh primo\n",x);
        }
        else if(sum==2)
        {
            printf("%d eh primo\n",x);
        }
    }



    return 0;
}
