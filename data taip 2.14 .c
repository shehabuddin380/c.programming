#include<stdio.h>
int main()
{
   int a,b,vlu;
   char sign;
   printf("entar a number: ");
    scanf("%d",&a);
    printf("entar another number: ");
    scanf("%d",&b);
    vlu=a+b;
    sign='+';
    printf("%d %c %d=%d\n",a,sign,b,vlu);
    vlu=a-b;
    sign='-';
    printf("%d %c %d=%d\n",a,sign,b,vlu);
    vlu=a*b;
    sign='*';
    printf("%d %c %d=%d\n",a,sign,b,vlu);
    vlu=a/b;
    sign='/';
    printf("%d %c %d=%d\n",a,sign,b,vlu);



    getch();
}
