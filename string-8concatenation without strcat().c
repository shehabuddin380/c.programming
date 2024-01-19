#include<stdio.h>
int main()
{
    char str1[100]="my name is ";
    char str2[]="Shihab Ahmed";

    int i=0,len=0,j=0;
    while(str1[i]!='\0')
    {
        i++;
        len++;
    }
    while(str2[j]!='\0')
    {
        str1[len+j]=str2[j];
        j++;
    }
    printf("\nstr1 = %s\n",str1);


    getch();
}
