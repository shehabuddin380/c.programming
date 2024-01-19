#include<stdio.h>
int main()
{
    int num,i,count=0;
    printf("entar any number: ");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        if(num%i==0){
            count++;
            break;
        }
    }
    if(count==0)
        printf("prime number");
    else
        printf("not prime number");


    getch();
}
