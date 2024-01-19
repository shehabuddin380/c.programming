#include<stdio.h>
int main()
{
   double num1,num2;
   char op;


   printf("entar an operator(+,-,*,/): ");
   scanf("%c",op);

   printf("entar 2 number: ");
   scanf("%lf %lf",&num1,&num2);


   switch(op)

   {

   case '+':
    printf("lf + lf = lf\n",num1,num2,nim1+num2);
    break;

      case '-':
    printf("lf - lf = lf\n",num1,num2,nim1-num2);
    break;

      case '*':
    printf("lf * lf = lf\n",num1,num2,nim1*num2);
    break;

      case '/':
    printf("lf / lf = lf\n",num1,num2,nim1/num2);
    break;

   }

   defaulf :
       printf("not a valide operator");




    getch();
}
