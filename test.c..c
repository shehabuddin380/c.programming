#include<stdio.h>
int main()
{
    int a,b,c;
    printf("enta 3 number: ");
    scanf("%d %d %d",&a,&b,&c);//a=10,b=5,c=15

    if (a>b && a>c)
        printf("a=%d\n",a);
    else if(b>a && b>c)
        printf("b=%d",b);
    else if(c>a && c>a)
        printf("c=%d",c);
    else
        printf("equals");

    getch();
}
