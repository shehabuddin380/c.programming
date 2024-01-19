#include<stdio.h>
#include<stdlib.h>
int main()
{
    while(1)
    {
    int n;
    scanf("%d",&n);
    if(n == 2002 )
    {
        printf("Acesso Permitido\n");
        exit(0);
    }
    else {
        printf("Senha Invalida\n");
    }
    }

    return 0;
}
