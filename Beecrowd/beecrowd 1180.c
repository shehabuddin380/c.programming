#include<stdio.h>
int main()
{
    int i,j,x,m,h,f,g,d,p,n=0;
    scanf("%d %d",&j,&m);
    for(i=0;i<j-1;i++)
    {
        scanf("%d",&x);
        n++;
        if(i==0){
            if(m<x){f=m; p=n;}
            else {f=x;p=n;}
        }
        else {
            if(x<f)
            {
                f=x;
                p=n;
            }
        }
    }
    printf("Menor valor: %d\n",f);
    printf("Posicao: %d\n",p);



    return 0;
}
