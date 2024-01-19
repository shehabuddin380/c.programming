#include<stdio.h>
int main()
{
    int N;
    for(;;)
    {
        scanf("%d",&N);
        if(N==0)break;
        long long int arr[N][N],i,j,k,l,m;
        l=1;
        for(i=0;i<N;i++)
        {
            k=l;
            for(j=0;j<N;j++)
            {
                arr[i][j]=k;
                k+=k;
            }l+=l;
        }
        for(i=0;i<N;i++)
        {
            for(j=0;j<N;j++)
            {
                if(N==1)
                {
                    if(j==0)printf("%lld",arr[i][j]);

                }
                if(N==2)
                {
                    if(j==0)printf("%lld",arr[i][j]);
                    else printf(" %lld",arr[i][j]);
                }
                else if(N==3)
                {
                    if(j==0)printf(" %lld",arr[i][j]);
                    else printf("%3lld",arr[i][j]);
                }
                else if(N==4)
                {
                    if(j==0)printf(" %lld",arr[i][j]);
                    else printf("%3lld",arr[i][j]);
                }
                else if(N==5)
                {
                    if(j==0)printf("%3lld",arr[i][j]);
                    else printf("%4lld",arr[i][j]);
                }
                else if(N==6 || N==7)
                {
                    if(j==0)printf("%4lld",arr[i][j]);
                    else printf("%5lld",arr[i][j]);
                }
                else if(N==8 || N==9)
                {
                    if(j==0)printf("%5lld",arr[i][j]);
                    else printf("%6lld",arr[i][j]);
                }
                 else if(N==10)
                {
                    if(j==0)printf("%6lld",arr[i][j]);
                    else printf("%7lld",arr[i][j]);
                }
                else if(N==11 || N==12)
                {
                    if(j==0)printf("%7lld",arr[i][j]);
                    else printf("%8lld",arr[i][j]);
                }

                else if(N==13 || N==14)
                {
                    if(j==0)printf("%8lld",arr[i][j]);
                    else printf("%9lld",arr[i][j]);
                }
                else if(N==15)
                {
                    if(j==0)printf("%9lld",arr[i][j]);
                    else printf("%10lld",arr[i][j]);
                }
            }
            printf("\n");
        }
        printf("\n");
    }



    return 0;
}
