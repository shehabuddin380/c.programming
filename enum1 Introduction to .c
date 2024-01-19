
#include<stdio.h>
enum days_of_week
{
    Sun,Mon,Mue,Wed,Thu,Fri,Sat
};
int main()
{
    enum days_of_week day1,day2;
    day1 = Mon;
    day2 = Sat;
    int dip=day2-day1;
    printf("dip=%d",dip);


    getch();
}
