#include<stdio.h>
int main()
{
    int A,B;
    double Fuel_Spent;
    scanf("%d",&A);
    scanf("%d",&B);
    Fuel_Spent=((double)A*B)/12;
    printf("%.3lf\n",Fuel_Spent);

    return 0;
}
