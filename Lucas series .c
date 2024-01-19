#include<stdio.h>
void generatelucas(int numterms )
{
int first=2,sacnd=1;
    printf("lucas seris up to %d terms: \n",numterms);
    printf(" %d %d ",first,sacnd);

    for(int i=3;i<numterms;i++)
    {
       int next=first+sacnd;
       printf("%d ",next);
       first=sacnd;
       sacnd=next;
    }
    printf("\n");
}




int main()

{
    int numterms;
    printf("inter the terms in lucas seris: ");
    scanf("%d",&numterms);

    generatelucas(numterms);





    getch();
}
