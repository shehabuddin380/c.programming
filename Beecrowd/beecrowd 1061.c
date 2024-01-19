#include<stdio.h>
int main()
{
    int w,x,y,z,d1,h1,m1,s1,d2,h2,m2,s2,st1,st2,date;
    char dia1[10],dia2[10],del[10];
    scanf("%s %d %d %s %d %s %d",dia1,&d1,&h1,&del,&m1,&del,&s1);

    scanf("%s %d %d %s %d %s %d",dia2,&d2,&h2,&del,&m2,&del,&s2);

    st1=s1+m1*60 + h1*60*60 + d1*24*60*60;
    st2=s2+m2*60 + h2*60*60 + d2*24*60*60;

    date=st2 - st1;

    w=date/(24*60*60);
    x=(date - w*24*60*60) / (60*60);
    y=(date - w*24*60*60 - x*60*60)/60;
    z= date - w*24*60*60 - x*60*60 - y*60;

    printf("%d dia(s)\n",w);
    printf("%d hora(s)\n",x);
    printf("%d minuto(s)\n",y);
    printf("%d segundo(s)\n",z);


    return 0;
}
