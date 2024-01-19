#include<stdio.h>
int main()
{
    int i,t=0,N[1000],n;
    scanf("%d",&n);
      for(i=0;i<1000;i++)
        {
            printf("N[%d] = %d\n",i,t);
            t++;
            if(n==t)t=0;
        }






    return 0;
}
