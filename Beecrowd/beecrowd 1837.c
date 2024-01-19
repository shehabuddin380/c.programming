#include<stdio.h>
int main()
{
    int i,j,k,l,a,b,c;
    scanf("%d %d",&a,&b);

   if(a<0)
   {
       j=b;
       if(b<0)
       {
           j=b*-1;
       }
       for(i=0;i<j;i++)
       {
           k=a-i;
           if(k%b==0)
            break;
       }
       c=k/b;
   }
   else
   {
        c=a/b;
        i=a%b;
   }

    printf("%d %d\n",c,i);
    return 0;
}
