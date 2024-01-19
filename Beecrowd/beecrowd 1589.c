#include<stdio.h>
int main()
{
    int n,R1,R2,i,j,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d",&R1,&R2);
        sum=R1+R2;
        printf("%d\n",sum);

    }



    return 0;
}
