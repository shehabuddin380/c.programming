
#include<stdio.h>
int main()
{
     double base,exp,result;
    printf("entar the base= ");
    scanf("%lf",&base);
    printf("entar the cxp= ");
    scanf("%lf",&exp);

    result=pow(base,exp);
    printf("%.2lf",result);
        getch();
}
