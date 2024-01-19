#include<stdio.h>
int main()
{
    int N,i,j,x,y,s=0;
    scanf("%d",&N);

    for(i=0;i<N;i++)
    {
        scanf("%d %d",&x,&y);
        if(x%2==0)x++;
        for(j=0;j<y;j++)
        {
            s+=x;
            x+=2;
        }
        printf("%d\n",s);
        s=0;
    }


    return 0;
}
