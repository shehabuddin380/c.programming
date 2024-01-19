#include<stdio.h>
int main()
{
    int N[10],i,s;
    scanf("%d",&s);

    for(i=0;i<10;i++)
    {

        printf("N[i] = %d\n",i,s);
        s += s;
    }


    return 0;
}
