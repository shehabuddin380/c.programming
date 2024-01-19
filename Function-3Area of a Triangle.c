#include<stdio.h>
double triangelArea(double b,double h);
int main()
{
    double base,height;
    printf("entar base: ");
    scanf("%lf",&base);

    printf("entar height: ");
    scanf("%lf",&height);

    double area=triangelArea(base,height);
    printf("area=%.lf",area);
    getch();
}
double triangelArea(double b,double h)
{

     return 0.5*b*h;
}
