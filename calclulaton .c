#include<stdio.h>
int main()
{
    double num1,num2;
     char op;



    printf("\nEnter a oparetor(+,-,*,/): ");
    scanf("%c",&op);

    printf("\nEnter two number: ");
    scanf("%lf %lf",&num1,&num2);

    switch(op)
    {
    case '+':
        printf("%lf + %lf = %.2lf\n",num1,num2,num1+num2);
        break;
    case '-':
        printf("%.lf - %lf = %.2lf\n",num1,num2,num1-num2);
        break;
    case '*':
        printf("%lf * %lf = %.2lf\n",num1,num2,num1*num2);
        break;
    case '/':
        printf("%lf / %lf = %.2lf\n",num1,num2,num1/num2);
        break;

    default:
        printf("not a valide operetor");
    }





    getch();
}
