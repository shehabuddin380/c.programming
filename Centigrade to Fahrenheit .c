#include<stdio.h>
int main()
{
    float C, F;

    printf("Enter centigrade number:  ");
    scanf("%lf",&C);


   F= (C* 1.8) + 32;
    printf("faharen= %lf\n",F);


    getch();
}
