#include<stdio.h>
int main()
{
    int num,count=0;
    printf("counting numeber: ");
    scanf("%d",&num);
    while(num!=0)
    {
        num=num/10;
        ++count;
    }
    printf("counting number=%d",count);



    getch();
}
