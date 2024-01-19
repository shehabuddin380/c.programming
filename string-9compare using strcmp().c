#include<stdio.h>
int main()
{
    char str1[]="Shihab Ahmed";
    char str2[]="Shihab Ahmed";

    int d=strcmp(str1,str2);
    if(d==0)
    {
        printf("strings are epuual");
     }
    else
        printf("strings are not epuual");


    getch();
}
