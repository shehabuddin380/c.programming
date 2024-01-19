#include<stdio.h>
int main()
{
    float i,n,sum=0;
    printf("entar n : ");
    scanf("%f",&n);

    for(i=1.5;i<=n;i++)
    {

        sum=sum+i;
    }
    printf("sum= %f\n",sum);



    getch();
}
