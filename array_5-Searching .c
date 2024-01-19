#include<stdio.h>
int main()
{
    int num[100],n,i;
    printf("How many number: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    int value,pos=-1;
    printf("Enter tha value you wint to scarch: ");
    scanf("%d",&value);
    for(i=0;i<n;i++)
    {
        if(value==num[i])
        {
            pos=i+1;
            break;
        }
    }
    if(pos==-1)
    {
        printf("Item is not faund");
    }
    else
        printf("The valu is found at %d prosition",pos);





    getch();
}
