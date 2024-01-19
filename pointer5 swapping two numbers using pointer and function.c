#include<stdio.h>
void swapping (int *prt1, int *prt2)
{
    int tmpe;

    tmpe=*prt1;
    *prt1=*prt2;
    *prt2=tmpe;
}
int main()
{
    int x,y;
    printf("Entar x number : ");
    scanf("%d",&x);
    printf("Entar y number : ");
    scanf("%d",&y);
    swapping(&x,&y);
    printf("x =%d\n",x);
    printf("y =%d\n",y);


    getch();
}
