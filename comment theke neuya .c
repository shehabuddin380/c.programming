#include<stdio.h>
int main()
{
  double sum=0,n,i;
  printf("Enter n=  ");
  scanf("%lf",&n);

  for(i=1; i<=n;i++)
  {
      sum=sum+(1/i);
  }
  printf("= %.2lf\n",sum);
}
