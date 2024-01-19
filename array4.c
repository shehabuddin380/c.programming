#include<stdio.h>
int main()
{
    int first[30][30],second[50][50],result[50][50];
    int r1,r2,c1,c2,i,j,k,sum=0;

    printf("Enterrows and column for first matrix: ");
    scanf("%d %d",&r1,&c1);
    printf("Enterrows and column for second matrix: ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("error !! column and first matrixnot equal to row of second\n");

    printf("Enterrows and column for first matrix: ");
    scanf("%d %d",&r1,&c1);
    printf("Enterrows and column for second matrix: ");
    scanf("%d %d",&r2,&c2);

    }
    printf("\nEnter eliment for first matrix.\n");
    for(i=0;i<r1;i++)
    {

        for(j=0;j<c1;j++)
        {
            printf("first[%d][%d]=",i,j);
            scanf("%d",&first[i][j]);
        }
    }
    printf("\nEnter eliment for second matrix.\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("second[%d][%d]=",i,j);
            scanf("%d",&second[i][j]);
        }
    }

    for(i=0;i<r1;i++)
    {
       for(j=0;j<c2;j++)
       {
           for(k=0;k<c1;k++)
           {
               sum=sum+first[i][k]*second[k][j];

           }
           result[i][j]=sum;
           sum=0;
       }
    }

    printf("\nfirst matrix:\n");
    for(i=0;i<r1;i++)
    {
       printf("\t");
        for(j=0;j<c1;j++)
        {
            printf("%d ",first[i][j]);
        }
        printf("\n");
    }
    printf("\n\nsecond matrix:\n");
    for(i=0;i<r2;i++)
    {
        printf("\t");
        for(j=0;j<c2;j++)
        {
            printf("%d ",second[i][j]);
        }
        printf("\n");
    }
    printf("\n\nresult matrix:\n");
    for(i=0;i<r1;i++)
    {
        printf("\t");
        for(j=0;j<c2;j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }



    getch();
}
