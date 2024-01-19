#include<stdio.h>
int main()
{

    char lowar, upper;
    printf("entar any lowarcase number: ");
    scanf("%c",&lowar);

    upper = toupper(lowar);
    printf("uppercase lettar=%c",upper);
    return 0;



}
