//1*2+2*3+3*4+........+n
#include<stdio.h>
int main()
{
    int n1,n2,a=1,b=2,sum=0;

    printf("entar n1 and n2 number: ");
    scanf("%d %d",&n1,&n2);

    printf("1.2+2.3+3.4+.....+ %d.%d",n1,n2);

    while(a<=n1 && b<=n2)
    {
        sum=sum+(a*b);
        a++;
        b++;

         // a=a+1;
       // b=b+1;
    }
    printf("=%d\n",sum);


    getch();
}
