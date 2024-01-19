#include<stdio.h>
int main()
{
    int A[50][50],transpose[50][50],i,j,row,col;

    printf("Enter number of  rows and columns for the matrix: ");
    scanf("%d %d",&row,&col);

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
    }


    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            transpose[j][i]=A[i][j];
        }
    }

    printf("\nEntered Matrix:\n");
    for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<col;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\ntranspose matrix:\n");
    for(i=0;i<col;i++)
    {
        printf("\t");
        for(j=0;j<row;j++)
        {
            printf("%d ",transpose[i][j]);

        }
        printf("\n");
    }




    getch();
}
