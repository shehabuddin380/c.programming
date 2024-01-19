#include<stdio.h>
int main()
{
    int row,col;
    int a[3][4]={{43,23,54,23},{32,42,54,64,},{38,45,64,12} };


    for(row=0;row<3;row++)
    {
        for(col=0;col<4;col++)
        {
            printf("%d ",a[row][col]);
        }
        printf("\n\n");
    }


    getch();
}
