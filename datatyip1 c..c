#include<stdio.h>
int main()
{
    int num1=20;
    float num2=9.44;
    double num3=4.87847858;
    char ch='a';
    printf("num,1%d\n",num1);
    printf("num2,%.13f\n",num2);
    printf("num3,%.20lf\n",num3);
    printf("ch,%c",ch);
    getch();
}
