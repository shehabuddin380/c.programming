#include<stdio.h>
int main()
{
    int i,j,row,col;
    int A[50][50],B[50][50],C[50][50];

    printf("Enter row numer: ");
    scanf("%d",&i);
    printf("Enter col numer: ");
    scanf("%d",&j);
    printf("\nEnter eliment for A matrix.\n");
    for(row=0;row<i;row++)
    {
        for(col=0;col<j;col++)
        {
            printf("A[%d][%d]=",row,col);
            scanf("%d",&A[row][col]);
        }
        printf("\n");
    }
    printf("\n");
    printf("A= ");
    for(row=0;row<i;row++)
    {
        printf("\t");
        for(col=0;col<j;col++)
        {
            printf("%d ",A[row][col]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Enter row numer: ");
    scanf("%d",&i);
    printf("Enter col numer: ");
    scanf("%d",&j);
    printf("\nEnter eliment for B matrix.\n");
    for(row=0;row<i;row++)
    {
        for(col=0;col<j;col++)
        {
            printf("B[%d][%d]=",row,col);
            scanf("%d",&B[row][col]);
        }
        printf("\n");
    }
    printf("\n");

    printf("B= ");
    for(row=0;row<i;row++)
    {
        printf("\t");
        for(col=0;col<j;col++)
        {
            printf("%d ",B[row][col]);
        }
        printf("\n");
    }


    for(row=0;row<i;row++)
    {
        for(col=0;col<j;col++)
        {
            C[row][col]=A[row][col]-B[row][col];
        }
        printf("\n");
    }

    printf("\nA + B = ");
    for(row=0;row<i;row++)
    {
        //printf("\t");
      for(col=0;col<j;col++)
        {
            printf("%d ",C[row][col]);
        }
        printf("\n");
        printf("\t");
    }



    getch();
}
