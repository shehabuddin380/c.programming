#include<stdio.h>
int main()
{
    int n,rat=0,frog=0,rabbit=0,sum=0,input;
    char c;
    float r,f,ra;
    scanf("%d",&n);

    while(n>0)
    {
        scanf("%d %c",&input,&c);
        if(c=='C')
        {

            rabbit +=input;
        }
        else if(c=='R')
        {

            rat +=input;
        }
        else if(c=='S')
        {

            frog +=input;
        }
        sum +=input;
        n--;
    }
    r=((float)rat/sum)*100;
    f=((float)frog/sum)*100;
    ra=((float)rabbit/sum)*100;
    printf("Total: %d cobaias\n",sum);
    printf("Total de coelhos: %d\n",rabbit);
    printf("Total de ratos: %d\n",rat);
    printf("Total de sapos: %d\n",frog);
    printf("Percentual de coelhos: %.2f %\n",ra);
    printf("Percentual de ratos: %.2f %\n",r);
    printf("Percentual de sapos: %.2f %\n",f);


    return 0;
}
