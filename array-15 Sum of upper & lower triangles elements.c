#include<stdio.h>
int main()
{
    int A[3][3],i,j,upperSum=0,lowerSum=0;

    printf("Entar the elements number:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("A[%d][%d]=",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    // printing tha matrix
    printf("Entar matrix: ");
    printf("\n");
    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<3;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
     //Sum of upper & lower elements
     for(i=0;i<3;i++)
     {
         for(j=0;j<3;j++)
         {
             if(i<j)
             {
                 upperSum = upperSum + A[i][j];
             }
             if(i>j)
             {
                 lowerSum = lowerSum + A[i][j];
             }
         }
     }
    printf("\n\nSum of upper tiagonal element= %d\n",upperSum);
    printf("\n\nSum of lower tiagonal element= %d\n",lowerSum);


    getch();
}
