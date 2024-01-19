#include<stdio.h>
int maximum(int x[])
{
int i;
int max = x[0];
for(i=1;i<9;i++)
{
    if(max < x[i])
        max=x[i];
}
return max;
}
int main()
{
 int m[]={10,20,30,40,50,485};
 int maximumbalue=maximum(m);
 printf("Maximum=%d\n",maximumbalue);

    getch();
}

