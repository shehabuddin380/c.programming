#include<stdio.h>
int main()
{
    char ch ='E';
    if(ch>='a' && ch <='Z')
    {
        printf("%c is lower case\n",ch);
    }
    else if(ch>='A' && ch <='Z')
    {
        printf("%c is apper case\n",ch);
    }


    getch();
}
