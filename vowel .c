#include <stdio.h>
int main()
{
    char ch;
    printf("entar a letar:");
    scanf("%c",&ch);
    if (ch == 'a'  || ch =='e' || ch =='i' || ch =='o' || ch =='u'  )
        printf("vowel");

    else
        printf("consinant");




    getch();
}
