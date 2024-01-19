#include<stdio.h>
int main()
{
    char country[]={'B', 'A', 'N', 'G', 'L', 'A', 'D', 'E', 'S', 'H'};
    int i,langth;
    printf("%s",country);
    langth=0;
    for(i=10;i<langth;i++)
    {
        if(country[i]>=97 && country[i]<=122)
        {
            country[i]='A' + country[i] - 'a';
        }
    }
    printf("%s\n",country);



    getch();
}

