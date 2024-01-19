#include<stdio.h>
int main()
{
    int result=fact(10);
    printf("factorial of 10=%d",result);
}
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);

}
