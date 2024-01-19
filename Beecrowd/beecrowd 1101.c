#include<stdio.h>
int main()
{
    int m,n,i,sum;
    while(1){
        scanf("%d %d",&m,&n);
        if(m <=0 || n <=0)
        {
            exit(0);
        }


        if(m>n)
        {
            i=m;
            m=n;
            n=i;
        }
        sum=0;
        for(i=m;i<=n;i++)
        {
            sum+=i;
            printf("%d ",i);
        }
        printf("Sum=%d\n",sum);
            }

    return 0;
}
