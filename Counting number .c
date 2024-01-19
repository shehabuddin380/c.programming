#include<stdio.h>
int main()
{
    int num,count=0;
    printf("entar any number: ");
    scanf("%d",&num);

    while(num!=0)
    {
        num=num/10;
        ++count;
    }
    printf("total number of digit:%d\n",count);




    getch();
}
