#include<stdio.h>
int main()
{
    char str[500],ch;
    int i,capitel,small,digit;
    i=capitel=small=digit=0;

    printf("ener  a string: ");
    gets(str);

    while(str[i]!='\0')
    {
        if(str[i]>=65 && str[i]<=90)
            capitel++;
            else if(str[i]>=97 && str[i]<=122)
            small++;
            else if(str[i]>=48 && str[i]<=57)
            digit++;


            i++;
    }

    printf("number of capitel=%d\n",capitel);
    printf("number of small=%d\n",small);
    printf("number of digit=%d\n",digit);



    getch();
}
