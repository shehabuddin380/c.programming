#include<stdio.h>
int main()
{
    int a,b,c;
    int i,j,k;
    int temp;
    scanf("%d %d %d",&a,&b,&c);
    i=a;
    j=b;
    k=c;

    if(i>j)
    {
        temp = i;
        i=j;
        j=temp;
    }
    if(i>k)
    {
        temp = i;
        i=k;
        k=temp;
    }
    if(j>k)
    {
        temp = j;
        j=k;
        k=temp;
    }
    printf("%d\n%d\n%d\n",i,j,k);
    printf("\n");
    printf("%d\n%d\n%d\n",a,b,c);


    return 0;
}
