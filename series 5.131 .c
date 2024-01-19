//1+2^2+3^2+4^2+.......n
#include<stdio.h>
int main()
{
   double n,i,sum=0;
   printf("entar n number : ");
   scanf("%lf",&n);

   for(i=1;i<=n;i++)
   {
       sum=sum+(1/i);

       if(i==1)
        printf("\n1+",i);
       else if(i==n)
        printf("(1/%.0lf)",i);
       else
        printf("(1/%.0lf)+",i);

   }
    printf("=%.lf",sum);

    getch();
}
