#include<Stdio.h>
int main()
{
    int n,row,col;
    printf("entar n : ");
    scanf("%d",&n);
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d",col%2);
        }
        printf("\n");
    }




    getch();
}
