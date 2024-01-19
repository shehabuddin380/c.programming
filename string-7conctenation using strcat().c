#include<stdio.h>
int main()
{
    char str1[]="my name is";
    char str2[]=" Shihab Ahmed";

    strcat(str1,str2);

    printf("str1= %s\n",str1);
    printf("str2= %s\n",str2);


    getch();
}
