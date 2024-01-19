#include<stdio.h>
void display(char sl[])
{
    int i=0;
    while(sl[i]!='\0')
    {
        printf("%c\n",sl[i]);
        i++;
    }
}
int main()
{
    char str[]="shehab";
    display(str);
}
