#include<stdio.h>
int main()
{
    int x,y,temp;
    printf("Entar x Number: ");
    scanf("%d",&x);
    printf("Entar y Number: ");
    scanf("%d",&y);

    int *prt1,*prt2;
    prt1=&x;
    prt2=&y;

    temp=*prt1;
    *prt1=*prt2;
    *prt2=temp;
    printf("x = %d\n",x);
    printf("y = %d\n",y);

    getch();
}
