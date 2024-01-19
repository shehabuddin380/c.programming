#include<stdio.h>
int main()
{
    int n1,n2,a,b,sum=0;
    printf("entar n1 and n2: ");
    scanf("%d %d",&n1,&n2);

    printf("(1*2)+(2*3)+(3*4)+.......+%d*%d",n1,n2);

    for(a=1;a<=n1 ;a++){
    for(b=2;b<=n2 ;b++)
{
        sum=sum+a*b;
    }
    }
    printf("=%d\n",sum);


    getch();
}
