#include<stdio.h>
double add(double h,double f);
int main()
{
    double a,b,c;
    a=2.7;
    b=2.8;
    c=add(a,b);
    printf("%.1lf\n",c);

    getch();
}
double add(double n1,double n2)
{
    double sum=n1+n2;
    return sum;
}
