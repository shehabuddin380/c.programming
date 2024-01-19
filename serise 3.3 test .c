//1*2+2*3+3*4+.......5*6
#include<stdio.h>
int main()
{
    int n1,n2,a,b,c,sum=0;
    printf("entar n1 and n2 number: ");
    scanf("%d%d",&n1,&n2);
    printf("1*2+2*3+3*4+.......+%d.%d=",n1,n2);





    for(a=1,b=2;a<=n1 && b<=n2;a++,b++){

            c=a*b;
            sum=sum+c;

    }
    printf(" %d",sum);

    getch();
}
