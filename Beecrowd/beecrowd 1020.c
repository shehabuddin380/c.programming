#include<stdio.h>
int main()
{
    int ano,mes,dia,N;
    scanf("%d",&N);
    ano=N/365;
    dia=N%365;
    mes=dia /30;
   dia=dia %30;
   printf("%d ano(s)\n",ano);
   printf("%d ano(s)\n",mes);
   printf("%d ano(s)\n",dia);



    return 0;
}

