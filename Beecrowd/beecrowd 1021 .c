#include<stdio.h>
int main()
{
    double N;
    int note[7]={100,50,20,10,5,2,1},money_note[7],a;
    int coin[5]={50,25,10,5,1},money_coin[5],i;
    scanf("%lf",&N);
    a = N;
    for(i=0; i<7; i++)
    {
        money_note[i]= a / note[i];
        a= a % note[i];
    }
    a=N*100;
    a=a%100;
    for(i=0;i<5;i++)
    {
        money_coin[i]= a / coin[i];
        a=a % coin[i];
    }
    printf("NOTAS:\n");
    for(i=0;i<6;i++)
    {
        printf("%d nota(s) de R$ %d.00\n",money_note[i],note[i]);

    }
    printf("MOEDAS:\n");
    printf("%d nota(s) de R$ %.2f\n",money_note[6],(float)note[6]);
    for(i=0;i<5;i++)
    {
        printf("%d moeda(s) de R$ %.2f\n",money_coin[i],(float)coin[i]/100);
    }



    return 0;
}
