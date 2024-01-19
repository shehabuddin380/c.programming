#include<stdio.h>
int main()
{
    int N,hour,minute,second;
    scanf("%d",&N);
    hour= N / 3600;
    second=N % 3600;
    minute=second / 60;
    second=second % 60;
    printf("%d:%d:%d\n",hour,minute,second);


    return 0;
}
