#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N number: ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%c ",row*col+64);
        }
        printf("\n");
    }





    getch();
}
