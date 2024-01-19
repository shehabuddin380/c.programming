
#include<stdio.h>
double trinagleariya (double a,double b);
int main()
{
    double base,height;
    printf("Entar base number: ");
    scanf("%lf",&base);
    printf("Entar height number: ");
    scanf("%lf",&height);

    double ariya=trinagleariya(base,height);
    printf("ariya=%.lf",ariya);
    getch();

}
double trinagleariya (double b,double h)
{
     return 0.5*b*h;
}
