#include<stdio.h>
int main()
int n,i,j,k,l,m,a,b,min;
while(1 == scanf("%d",&n);){
    if(n==0)
    {
        break;
    }
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            min=i;
            if(j<min)
            min=j;
            if(n-i+1<min)
                min=n-i+1;
            if(n-j+1<min)
                min=n-j+1;
            printf("%3d\n",min);
        }
        printf("\n");
    }
    printf("\n");
}
    return 0;
}
