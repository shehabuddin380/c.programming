#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
    if(x > y)
    {
        printf("Decrescente\n");

    }
    else if(x<y)
    {
        printf("Crescente\n");
    }
    else{
        if(x==y)
        {
            exit(0);
        }
    }


    return 0;
}
