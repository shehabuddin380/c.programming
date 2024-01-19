#include<stdio.h>
int main()
{
    int row,col,i,j;
    int A[50][50];
    printf("Enter row number: ");
    scanf("%d",&i);
    printf("Enter col number: ");
    scanf("%d",&j);





    for(row=0;row<i;row++)
    {
        for(col=0;col<j;col++)
        {
            printf("A[%d][%d] = ",row,col);
            scanf("%d",&A[row][col]);
        }
        printf("\n");
    }
    printf("\n");
    for(row=0;row<i;row++)
    {
        for(col=0;col<j;col++)
        {
            printf("%d ",A[row][col]);
        }
        printf("\n");
    }






    getch();
}
