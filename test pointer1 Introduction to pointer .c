#include<stdio.h>
int main()
{
    int x=10;
    int *point;
    point=&x;
    printf("\n\t%x\n",x);
    printf("\t%d\n",&x);
    printf("\t%d\n",point);
    printf("\t%d\n",*point);
    printf("\t%d\n",&point);

    getch();
}
