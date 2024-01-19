#include<stdio.h>
int main()
{
    int m;
    printf("enatar the m number: ");
    scanf("%d",&m);
    int result=Square(m);
    printf("Square is:%d",result);
    getch();
}
int  Square(int a)
{

    return a*a;

}
