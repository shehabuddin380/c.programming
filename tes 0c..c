#include<stdio.h>
int main()
{
    int a,b,c,sum;
    float d;
    printf("entar 3 number: ");
    scanf("%d%d%d",&a,&b,&c);

    sum=a+b+c;
    printf("sum=%d\n",sum);

    d=sum/(float)3;
    printf("d=%.2f",d);
    getch();



}
