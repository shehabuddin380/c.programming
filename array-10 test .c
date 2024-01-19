#include<stdio.h>
int main()
{
    int row,col,n,m;
    int A[10][10],B[10][10],C[10][10];
    printf("enter the number of n and m1:");
    scanf("%d %d",&n,&m);

     printf("entar elements for A matrix\n\n");
    for(row=0;row<n;row++)
    {
        for(col=0;col<m;col++)
        {
            printf("A[%d][%d]",row,col);
            scanf("%d",&A[row][col]);
        }
        printf("\n");
    }

     printf("\n\nentar elements for B matrix\n\n");
    for(row=0;row<n;row++)
    {
        for(col=0;col<m;col++)
        {
            printf("B[%d][%d]",row,col);
            scanf("%d",&B[row][col]);
        }
        printf("\n");
    }

     printf("A= ");
    for(row=0;row<n;row++)
    {
        printf("\t");
       for(col=0;col<m;col++)
       {
           printf("%d ",A[row][col]);
       }
       printf("\n");
    }

     printf("\n\nB= ");
    for(row=0;row<n;row++)
    {
        printf("\t");
       for(col=0;col<m;col++)
       {
           printf("%d ",B[row][col]);
       }
       printf("\n");
    }
   for(row=0;row<n;row++)
    {
       for(col=0;col<m;col++)
       {
          C[row][col]=A[row][col]+B[row][col];
       }

    }
 printf("\n\n A+B= ");
    for(row=0;row<n;row++)
    {
        printf("\t");
       for(col=0;col<m;col++)
       {
           printf("%d ",C[row][col]);
       }
       printf("\n");
    }





    getch();
}
