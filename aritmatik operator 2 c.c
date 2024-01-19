//write a pogram that takes two integar display sum
#include<stdio.h>
int main()
{
    int a,b,sum;
    float ch;
    printf("entar two number : ");
    scanf("%d %d",&a,&b);

    sum=a+b;
    printf("tha sum is= %d\n",sum);


    ch=(float)sum/2;
    printf("the average is= %.1f\n",ch);
    return 0;




}
