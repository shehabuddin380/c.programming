#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    if(c>d)
    {
        //7 8 9 10
        d=(d+60);//9+60=79
        e=d-c;//79-9=70
        if(a==b)
        {
            printf("O JOGO DUROU 24 HORA(S) E %d MINUTO(S)\n");
        }
        else if(a<b)
        {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",b-a-1);
        }
        else if(a>b)
        {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(b+24)-a-1,e);
        }
    }
    else
    {
        if(c<d)e=d-c;
            else e=0;
        if(a==b)
        {
            printf("O JOGO DUROU 24 HORA(S) E %d MINUTO(S)\n");
        }
        else if(a<b)
        {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",b-a);
        }
        else if(a>b)
        {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(b+24)-a,e);
        }
    }


    return 0;
}

