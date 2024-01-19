#include<stdio.h>
int main()
{
   int i,n,sum=1;
   printf("entar n : ");
   scanf("%d",&n);

   for(i=1;i<=n;i++)
   {
       sum=sum*i;
   }
   printf("=%d",sum);



getch();
}
