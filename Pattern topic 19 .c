#include<stdio.h>
int main()
{
    int n,row,col;
    printf("entar N : ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(row==col || row+col==n+2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }




    getch();
}
