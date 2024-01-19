#include<stdio.h>
int main()
{
    int a,i,j=0,e[5],o[5],k=0,l=0,m;

    for(i=0;i<15;i++)
    {
        scanf("%d",&a);
        if(a%2==0)
        {
            e[k]=a;
            k++;
            if(k==5)
            {
                for(m=0;m<5;m++)
                {
                    printf("par[%d] = %d\n",m,e[m]);
                    e[m]=0;
                }
                k=0;
            }
        }

        else
        {
            o[l]=a;
            l++;
   if(l==5)
            {
                for(m=0;m<5;m++)
                {
                    printf("impar[%d] = %d \n",m,o[m]);
                    o[m]=0;
                }
                l=0;
            }
        }

    }
    for(i=0;i<5;i++)
    {
        if(o[i]==0)break;
        printf("impar[%d] = %d\n",i,o[i]);
  }
    for(i=0;i<5;i++)
    {
        if(e[i]==0)break;
        printf("par[%d] = %d\n",i,e[i]);
    }


    return 0;
}
