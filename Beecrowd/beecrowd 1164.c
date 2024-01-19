#include<stdio.h>
int main()
{
    int y,i,j,x,n;
    scanf("%d",&y);
    for(i=0;i<y;i++)
    {
        x=0;
        scanf("%d",&n);
        for(j=1;j<n;j++)
        {
            if(n%j==0)
            {
                x+=j;
            }
        }
        if(x==n)
        printf("%d eh perfeito\n",n);
        else{
            printf("%d nao eh perfeito\n",n);
        }


    }
    return 0;

}
