#include<stdio.h>
int main()
{
    float rasel,miraj,nayem,tanzil,shovo,bayezid,sum=0,meal,meal1,meal2,meal3,meal4,meal5,meal6;
    float a,b,c,d,e,f,g,h,i,j,k,l;
    float gor_meal;
    // totao tk ar input nei
    printf("Deposit Rasel bhai : ");
    scanf("%f",&rasel);

    printf("Deposit Miraj bhai : ");
    scanf("%f",&miraj);

    printf("Deposit Nayem bhai : ");
    scanf("%f",&nayem);

    printf("Deposit Tanzil bhai: ");
    scanf("%f",&tanzil);

    printf("Deposit Shovo bhai : ");
    scanf("%f",&shovo);

    printf("Deposit Bayezid bhai: ");
    scanf("%f",&bayezid);
    //total input ke Sum kori
    sum += rasel+miraj+nayem+tanzil+shovo+bayezid;
    printf("\nTotal Deposit :%.2f\n",sum);
    //total meal input nei
    printf("Total meal: ");
    scanf("%f",&meal);
    //total meal ar gor ber kori
    gor_meal= sum/meal;
    printf("\nmeal the price:%.2f\n",gor_meal);
    //kar koita mael amd koto tk ar khabar khaiche ta hisab kori
    printf("\ntotal Rasel vair meal : ");
    scanf("%f",&meal1);
    a=meal1*gor_meal;
    printf("Rasel vair total khabar khoroc= %.2f tk\n",a);
    if(a<=rasel)
    {
        g=rasel-a;
        printf("Rasel baiya pabe %.2f \n",g);
    }
    else{
        g=a-rasel;
        printf("Rasel baiya dibe %.2f \n",g);
    }

    printf("\ntotal Miraj vair meal : ");
    scanf("%f",&meal2);
    b=meal2*gor_meal;
    printf("Miraj vair total khabar khoroc= %.2f tk\n",b);
    if(b<=miraj)
    {
        h=miraj-b;
        printf("Miraj baiya pabe %.2f \n",h);
    }
    else{
        h=b-miraj;
        printf("Miraj baiya dibe %.2f \n",h);
    }



    printf("\ntotal Nayem vair meal : ");
    scanf("%f",&meal3);
    c=meal3*gor_meal;
    printf("Nayem vair total khabar khoroc= %.2f tk\n",c);
    if(c<=nayem)
    {
        i=nayem-c;
        printf("Nayem baiya pabe %.2f \n",i);
    }
    else{
        i=c-nayem;
        printf("Nayem baiya dibe %.2f \n",i);
    }


    printf("\ntotal Tanzil vair meal: ");
    scanf("%f",&meal4);
    d=meal4*gor_meal;
    printf("Tanzil vair total khabar khoroc= %.2f tk\n",d);
    if(d<=tanzil)
    {
        j=tanzil-d;
        printf("Tanzil baiya pabe %.2f \n",j);
    }
    else{
        j=d-tanzil;
        printf("Tanzil baiya dibe %.2f \n",j);
    }


    printf("\ntotal Shovo vair meal : ");
    scanf("%f",&meal5);
    e=meal5*gor_meal;
    printf("Shovo vair total khabar khoroc= %.2f tk\n",e);
    if(e<=shovo)
    {
        k=shovo-e;
        printf("Shovo baiya pabe %.2f \n",k);
    }
    else{
        k=e-shovo;
        printf("Shovo baiya dibe %.2f \n",k);
    }


    printf("\ntotal Bayezid vair : ");
    scanf("%f",&meal6);
    f=meal6*gor_meal;
    printf("Bayezid vair total khabar khoroc= %.2f tk\n",f);
    if(f<=bayezid)
    {
        l=bayezid-f;
        printf("Bayezid baiya pabe %.2f \n",l);
    }
    else{
        l=f-bayezid;
        printf("Bayezid baiya dibe %.2f \n",l);
    }

    return 0;
}
