#include<stdio.h>
int main()
{
    int n,row,col;
    printf("entar n: ");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
        {
            printf(" 9999");
        }
        for(col=1;col<=row;col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }


    getch();
}
