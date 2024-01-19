#include<stdio.h>
int mai ()
{
    int n,row,col;
    printf("entar N: ");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        for(col=1;col<=n-row;row++)
        {
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++)
        {
            printf("%d ",col );

        }
        printf("\n");
    }


    getch();
}
