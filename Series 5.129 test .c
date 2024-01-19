//1^2+3^2+5^2+.......n^2;;;
#include<stdio.h>
int main()
{
    int n,i,sum=0;
    printf("entar n number: ");
    scanf("%d",&n);
    printf("1^2+3^2+5^2+.......%d=",n);

    for(i=1;i<=n;i=i+2)
    {
        sum=sum+i*i;
    }
    printf("%d",sum);



    getch();
}
