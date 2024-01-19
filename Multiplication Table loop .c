#include<stdio.h>
int main()
{
    while(1){
  int num,i;
  printf("entar a number: ");
  scanf("%d",&num);

  i=1;
  for(;i<=10;i++)
  {
      printf("%d*%d=%d\n",num,i,num*i);
  }
    }

    getch();
}
