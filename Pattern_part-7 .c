#include<stdio.h>
int main()
{
    int n,col,row;
    printf("Enter N number: ");
    scanf("%d",&n);

    for(row=n;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++)
        {
            printf("%d",col);
        }
        printf("\n");
    }



    getch();
}
