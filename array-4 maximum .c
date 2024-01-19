#include<stdio.h>
int main()
{
    int num[100],n,i;
    printf("how muny number: ");
    scanf("%d",&num);

    for(i=0;i<n;n++)
    {
        scanf("%d",&num[i]);
    }
    int max=num[0];
    for(i=1;i<n;i++)
        {
            if(max<num[i]);
            max=num[i];
        }
    printf("max=%d\n",max);



    getch();
}
