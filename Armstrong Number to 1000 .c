#include<stdio.h>
int main()
{
    int initial_num,final_num,temp,r,i,sum=0;
    printf("initial_num: ");
    scanf("%d",&initial_num);

    printf("final_num: ");
    scanf("%d",&final_num);

    for( i=initial_num; i<=final_num;i++)
    {
        temp = i ;
        while(temp !=0)
        {
            r = temp%10;
            sum = sum+r*r*r ;
            temp = temp/10;
        }
        if(sum==i)
        {
            printf("Armstrong Number= %d\n",i);
        }
         sum=0;
    }

    getch();
}
