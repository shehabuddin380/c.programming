/*#include<stdio.h>
int find_max(int ary[],int n);
int main()
{
    int ara[]={1,423,325,256,462,254,12,533,64,562,123};
    int n=11;
    int max=find_max(ara,n);
    printf("number=%d\n",max);



    getch();
}
int find_max(int ara[],int n)
{
    int max[0];
    int i=1;

    for(i=1;i<n;i++)
    {
        if(ara[i] < max)
        {
          max=ara[i];
        }

    }
    return max;
}*/
#include <stdio.h>
 int find_max(int ara[], int n);
 int main()
 {
     int ara[] = {100, 0, 53, 22, 83, 23, 89, 132, 201, 3, 85};
     int n = 11;
     int max = find_max(ara, n);
     printf("number=%d\n", max);
     return 0;
 }
 int find_max(int ara[], int n)
 {
     int max = ara[0];
     int i;
     for(i = 1; i < n; i++) {
         if (ara[i] < max) {
             max = ara[i];
         }
     }
     return max;
 }
