#include<stdio.h>
int main()
{
    int ary[]={100,548,208,873,483,501,32,1,43,453,384};
    int n=11;
    int max=find_max(ary,n);
    printf("\nbig numbers = %d\n",max);

    getch();
}
int find_max(int ary[],int n)
{
    int max=ary[0];
    int i=1;
    for(i=1;i<n;i++)
    {
        if(ary[i]>max)
        {
            max=ary[i];
        }
    }



    return max;
}
