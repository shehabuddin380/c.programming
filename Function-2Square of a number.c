#include<stdio.h>
int  Square(int a)
{

    return a*a;

}
int main()
{
    int m;
    printf("entar the m number: ");
    scanf("%d",&m);

    int result= Square(m);
    printf("Square is: %d",result);

    getch();
}
