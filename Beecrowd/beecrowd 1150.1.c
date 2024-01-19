#include<stdio.h>
int main()
{
    int x,z,a,b=0,c=0;
    scanf("%d %d",&x,&z);
    do
    {
        scanf("%d",&z);
    }
    while(x>=z);
        for(a=x;b<z;a++)
        {
            b+=a;
            c++;
        }
        printf("%d\n",c);

    return 0;
}
