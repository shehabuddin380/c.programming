#include<stdio.h>
int main()
{
    int N,i,j,k,l,m,n,arry[102][102];
    while(scanf("%d",&N)!=EOF){
            k=N-1;
            l=N/3;
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
             if(i==j)arry[i][j]=2;
            else arry[i][j]=0;
            if(j==k)arry[i][j]=3;
            }k--;
        }
        for(i=l;i<N-l;i++)
        {
            for(j=l;j<N-l;j++)
            {
                arry[i][j]=1;
                if(i==N/2 && j==N/2)arry[i][j]=4;
            }
        }
        for(i=0;i<N;i++)
        {
        for(j=0;j<N;j++)
            {
            printf("%d",arry[i][j]);
            }printf("\n");
        } printf("\n");
    }

    return 0;
}
