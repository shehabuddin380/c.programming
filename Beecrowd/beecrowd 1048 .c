#include<stdio.h>
int main()
{
    while(1)
    {
    double equal_Salary,bonus,a,d,e,f;;
    int parcentage;
    scanf("%lf",&a);

    if(0 <=a && a<=400.00)
    {
        parcentage=15;
        bonus=(a*parcentage)/100;
        equal_Salary=a+bonus;
        printf("Novo salario: %.2lf\n",equal_Salary);
        printf("Reajuste ganho: %.2lf\n",bonus);
        printf("Em percentual: %d %%\n",parcentage);

    }
    else if(400.01 <=a && a<=800.00)
        {
        parcentage=12;
        bonus=(a*parcentage)/100;
        equal_Salary=a+bonus;
        printf("Novo salario: %.2lf\n",equal_Salary);
        printf("Reajuste ganho: %.2lf\n",bonus);
        printf("Em percentual: %d %%\n",parcentage);

        }
     else if(800.01 <=a && a<=1200.00)
        {
        parcentage=10;
        bonus=(a*parcentage)/100;
        equal_Salary=a+bonus;
        printf("Novo salario: %.2lf\n",equal_Salary);
        printf("Reajuste ganho: %.2lf\n",bonus);
        printf("Em percentual: %d %%\n",parcentage);

        }
     else if(1200.01 <=a && a<=2000.00)
        {
        parcentage=7;
        bonus=(a*parcentage)/100;
        equal_Salary=a+bonus;
        printf("Novo salario: %.2lf\n",equal_Salary);
        printf("Reajuste ganho: %.2lf\n",bonus);
        printf("Em percentual: %d %%\n",parcentage);

        }
     else if(2000.01 <a )
        {
        parcentage=4;
        bonus=(a*parcentage)/100;
        equal_Salary=a+bonus;
        printf("Novo salario: %.2lf\n",equal_Salary);
        printf("Reajuste ganho: %.2lf\n",bonus);
        printf("Em percentual: %d %%\n",parcentage);

        }
    }




    return 0;
}
