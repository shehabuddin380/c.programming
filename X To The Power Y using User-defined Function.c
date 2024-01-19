#include<stdio.h>
void calclatepower(double base,double exp)
{
double result=1,i;
for(i=1;i<=exp;i++)
{
    result=result*base;
}
printf("%.lf",result);
}
int main()
{
    double base,exp;
    printf("entar the base= ");
    scanf("%lf",&base);
    printf("entar the cxp= ");
    scanf("%lf",&exp);


    calclatepower(base,exp);

    getch();
}

