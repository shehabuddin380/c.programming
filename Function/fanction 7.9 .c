#include<stdio.h>
void test_function(int ara[])
{
    ara[0]=100;
    return;
}
int main()
{
    int ara[]={1,2,3,4,5};
    printf("ara=%d\n",ara[0]);
    test_function(ara);
    printf("ara1=%d\n",ara[0]);


    getch();
}

