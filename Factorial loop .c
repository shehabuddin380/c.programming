#include <stdio.h>
int main()
{
    int n,i,fact=1;
    printf("entar positive number: ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        fact=fact*i;
        {
            printf("%d\n",fact);
        }
    }




    getch();
}
