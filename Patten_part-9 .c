#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N Number: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n;col++)
        {
            if(row==1 || row==n || col==1 || col==n)
                printf("%d",col);
            else
                printf(" ");
        }
        printf("\n");
    }



    getch();
}
