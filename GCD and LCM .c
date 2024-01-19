#include<stdio.h>
int main()
{
    int num1,num2,rem,LCM,GCD;
    printf("Enter your GCD number: ");
    scanf("%d",&num1);
    printf("Enter your LCM number: ");
    scanf("%d",&num2);
    int n1=num1;
    int n2=num2;
    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    GCD=n1;
    LCM=(num1*num2)/GCD;
    printf("GCD=%d\n",GCD);
    printf("LCM=%d\n",LCM);


    getch();
}
