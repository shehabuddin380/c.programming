//1,2,3,4,5...........1000;
//1,3,5,7,...........1000;
//2,4,6,8,10..........1000;
//1,4,7,10..........1000;

#include<stdio.h>
int main()
{
    int n,i;
    printf("enta n number: ");
    scanf("%d",&n);

    for(i=2;i<=n;i=i+2)
    {
        printf("%d\n",i);
    }



    getch();
}
