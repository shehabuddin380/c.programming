#include<stdio.h>
int main()
{
    int A,B,NUMBER;
    double C,SALARY;
    scanf("%d %d",&A,&B);
    scanf("%lf",&C);

    SALARY=B*C;
    printf("NUMBER = %d\n",A);
    printf("SALARY = U$ %.2lf\n",SALARY);


    return 0;
}
