#include<stdio.h>
int main()
{
    int i=10,y=20,n=40;
    int *ptr;

    ptr = &i ;
    printf("\n\nname:Shihab\ti=%d\n",*ptr);

    ptr = &y ;
    printf("\ty=%d\n",*ptr);

    ptr = &n ;
    printf("\tn=%d\n",*ptr);


    getch();
}
