#include<stdio.h>
int main()
{
    char chr[100];
    while(NULL != gets(chr))
    {
        printf("%s",chr);
    }


    getch();
}
/*int string_length(char str[])
 {
     int i;
     for(i = 0; str[i] != '\0'; i++);
     return i;
 }*/
