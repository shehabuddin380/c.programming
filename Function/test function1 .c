#include<stdio.h>
double test_unction(double b)
{
    double c=b;
    b=2*c;
    return (b*c);


}

int main()
{
    double a=10.5,b=20.5,c=30.5;
    a=test_unction(a);
    printf("enter 3 numbers= %.2lf\t%.2lf \t%.2lf",a,b,c);


    getch();
}
