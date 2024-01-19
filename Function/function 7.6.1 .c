#include<stdio.h>
double pi=3.14;
void my_fucn()
{
    pi=3.1416;
    return;
}
int main()
{
    printf("%lf\n",pi);
    my_fucn();
    printf("pi1=%lf",pi);

    getch();
}
