#include<stdio.h>
int main()
{
    int n,i;
   while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
        {
            printf("vai ter copa!\n");
        }
        else
        {
            printf("vai ter duas!\n");
        }
    }
    return 0;
}
