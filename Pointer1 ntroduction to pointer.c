#include<stdio.h>
int main()
{
    int n=5;
    int *point;

    point=&n;
    printf("%d\n",n);
    printf("%d\n",&n);
    printf("%d\n",point);
    printf("%d\n",*point);
    printf("%d\n",&point);



    getch();
}
