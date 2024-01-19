#include<stdio.h>
int main()
{
    double a,b,c,s,sum;
    printf("entar 3 velues: ");
    scanf("%lf%lf%lf",&a,&b,&c);

    s=(a+b+c)/2;
    sum=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("sum=%.2lf",sum);


    getch();
}
