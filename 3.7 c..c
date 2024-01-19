#include<stdio.h>
int main ()
{
    int num1,remainder;
    num1=5;
    remainder=num1%2;
    if(remainder == 0)
    {
        printf("the number is even\n");
    }
    else
    {
        printf("the number is odd\n");
    }



    getch();
}
