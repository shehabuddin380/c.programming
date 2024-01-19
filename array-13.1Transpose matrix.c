#include<stdio.h>
int main()
{
    int A[10][10],transpose[10][10],row,col,i,j;

    printf("Entar rows and colms for the matrix= ");
    scanf("%d %d",&row,&col);


    printf("\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("A[%d][%d]",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    //transpose matrix
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            transpose[j][i]=A[i][j];
        }
    }

    // printing tha matrix
    printf("\nEntar matrix\n\n");
    for(i=0;i<row;i++)
    {
        printf("\t");
        for(j=0;j<col;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }

    //printing transpose matrix
    printf("\nEntar transpose matrix.\n");
    for(i=0;i<col;i++)
    {
        printf("\t\t");
        for(j=0;j<row;j++)
        {
            printf("%d ",transpose[i][j]);
        }
        printf("\n");
    }



    getch();
}
