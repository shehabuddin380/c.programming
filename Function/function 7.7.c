#include<stdio.h>
double pi=3.14 ;
void my_fnc()
{
    pi = 3.1416;
    return;


}

int main()
{
    printf("pi=\t%lf\n",pi);

    my_fnc();

    printf("pi1=\t%lf\n",pi);


    getch();
}
