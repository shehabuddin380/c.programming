#include<stdio.h>
int main()
{
    int row,col;
    int A[3][4],B[3][4];
    printf("entaer elemnts for A matrix.\n\n");
    for(row=0;row<3;row++)
    {
        for(col=0;col<4;col++)
        {
            printf("A[%d][%d]",row,col);
            scanf("%d",&A[row][col]);
        }
        printf("\n");
    }
    printf("A=: ");
    for(row=0;row<3;row++)
    {
        printf("\t");
        for(col=0;col<4;col++)
        {
            printf("%d ",A[row][col]);
        }
        printf("\n");
    }


    printf("\n\nentaer elemnts for B matrix.\n\n");
    for(row=0;row<3;row++)
    {
        for(col=0;col<4;col++)
        {
            printf("B[%d][%d]",row,col);
            scanf("%d",&B[row][col]);
        }
        printf("\n");
    }
    printf("B=: ");
    for(row=0;row<3;row++)
    {
        printf("\t");
        for(col=0;col<4;col++)
        {
            printf("%d ",B[row][col]);
        }
        printf("\n");
    }

    getch();
}
