#include<stdio.h>
int main()
{
    double i,c,s=0,b=1;
    for(i=1;i<=39;i+=2)
    {
        c=i/b;
        s+=c;
        b*=2;
    }
    printf("%.2lf\n",s);


    return 0;
}
