#include<stdio.h>
int main()
{
    int A[3][3],i,j,sum=0;

    printf("Entar the elements number: ");
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    // printing tha matrix
    printf("Entar  matrix.\n");
    for(i=0;i<3;i++)
    {
        printf("\t");
        for(j=0;j<3;j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }
     //Sum of diagonal elements
     printf("\ndiagonal elements= \n");
      printf("\t");
     for(i=0;i<3;i++)
     {

         for(j=0;j<3;j++)
         {

             if(i==j)
             {

                 printf("%d ",A[i][j]);
                 sum=sum+A[i][j];
             }
         }

     }
     printf("\n\nSum of siagonal element= %d\n",sum);

    getch();
}
