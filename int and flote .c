#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int a,b,sum=0;

float m,n,sum1=0;

printf("Number a and b : ");
scanf("%d%d",&a,&b);
sum=a+b;
printf("sum=  %d\n",sum);

printf("Number n and m : ");
scanf("%f%f",&n,&m);
sum1=n+m;
printf("sum1=  %.2f",sum1);


    return 0;
}
