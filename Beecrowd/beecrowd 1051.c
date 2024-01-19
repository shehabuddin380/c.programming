#include<stdio.h>
int main()
{
    int salary,tax=0;
    scanf("%d",&salary);

    if(salary > 2000.0)
    {
        salary=salary-2000.0;
        if(0 <= salary && salary <= 1000)
        {
            tax=(salary * 8)/100.0;
            salary=salary-1000;
        }

    else if(salary>1000)
        {
            tax=(1000 * 8)/100.0;
            salary=salary-1000.0;
        }
         if(0 <= salary && salary <= 1500)
         {
            tax=((salary * 18)/100.0)+tax;
            salary=salary-15000;
         }
    else if(salary >1500)
        {
            tax=((1500 * 18)/100.0)+tax;
            salary=salary-15000;
        }
         if(salary > 0)
         {
            tax=((salary * 28)/100.0)+tax;

         }

        printf("R$ %.2f\n",tax);
    }
    else
    {
        printf("Isento\n");
    }






    return 0;
}
