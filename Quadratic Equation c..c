//sqrt(b*b-4*a*c)
#include<stdio.h>
int main()
{
    double a;
    double b;
    double c;
    double d;
    double x1;
    double x2;

    printf("entar a number=");
   scanf("%lf",&a);
    printf("entar b number=");
    scanf("%lf",&b);
    printf("entar c number=");
    scanf("%lf",&c);
   /*anf("%lf",&a);
    scanf("%lf",&b);
    scanf("%lf",&c);*/

    d=(b*b-4*a*c);
    x1=(-b+d)/(2*a);
    x2=(-b-b)/(2*a);
    printf("x1=%lf\n",x1);
    printf("x2=%lf\n",x2);



    getch();
}
