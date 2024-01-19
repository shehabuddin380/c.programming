#include<stdio.h>
int main()
{
   // double a,b,c,d,area;
    double a,b,c,s,area;
    printf("entar 3 velue: ");
    scanf("%lf%lf%lf",&a,&b,&c);

    //d=(a+b+c)/2;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    //area =sqrt(s*(s-a)*(s-b)*(s-c));
    printf("area=%.2lf",area);




    getch();
}
