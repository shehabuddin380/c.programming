#include<stdio.h>
int main()
{
    char ch;
    printf("enter a letter: ");
    scanf("%c",&ch);

    if(ch>='A'  &&  ch<='Z')
            printf("capital");
    else if(ch>='a m' && ch<='z')
        printf("small");
    else
        printf("not a letter ");
    getch();
}
