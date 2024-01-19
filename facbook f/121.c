#include<stdio.h>
int main()
{
    int a=5,b=12;
    printf("%d %d %d %d\n",++a,b++,a++,++b);
    printf("%d %d\n",a++,b++);
    return 0;
}
