#include<stdio.h>
int main()
{
    double num1,num2;
    char op;

    printf("entar an oparator(-,+,*,/): ");
    scanf("%c",&op);

    printf("entar two number: ");
    scanf("%lf %lf",&num1,&num2);


    switch(op)
    {
    case '+':
        {
        printf("%lf+%lf = %.2lf\n",num1,num2,num1+num2);
        break;
        }

        case '-':
        {
        printf("%lf-%lf = %.2lf\n",num1,num2,num1-num2);
        break;
        }
        case '*':
        {
        printf("%lf*%lf = %.2lf\n",num1,num2,num1*num2);
        break;
        }
        case '/':
        {
        printf("%lf/%lf = %.2lf\n",num1,num2,num1/num2);
        break;
        }

        default :
            printf("not a valid operator ");

    }



    getch();
}
