#include<stdio.h>
int main()
{
    char ara[10]={10,20,30,40,50,60,70,80,90,100};
    int i;

    for(i=0;i<10;i++)
    {
        printf("%d  the element is: %d\n",i+1,ara[i]);
    }



    getch();
}
