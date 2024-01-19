#include<stdio.h>
int main()
{
    int a,b,sum;
    printf("entar two number: ");
    scanf("%d %d",&a,&b);

    sum=a+b;
    printf("(+)=%d\n",sum);

    sum = a-b;
    printf("(-)=%d\n",sum);

    sum=a*b;
    printf("(*)=%d\n",sum);

    sum=a/b;
    printf("(/)=%d\n",sum);

    sum= a % b;
    printf("(%)=%d\n",sum);

    getch();





}
