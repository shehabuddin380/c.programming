#include<stdio.h>
int main()
{
    int rasel=1000,mael=1102,g;
    if(mael<=rasel)
    {
        g=rasel - mael;
        printf("Rasel vai pabe %d\n",g);
    }
    else {
        g=mael-rasel;
        printf("Rasel vaiya dibe %d\n",g);
    }



    return 0;
}
