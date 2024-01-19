
#include<stdio.h>
int main()
{

    char lowar, upper;
    printf("entar any uppercase number: ");
    scanf("%c",&upper);
    lowar = tolower(upper);
    printf("lowarcase letter=%c",lowar);
    return 0;

}
