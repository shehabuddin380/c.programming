#include<stdio.h>
int main()
{
    char str1[100]="bangladesh";
    char str2[100]="indiya";
    char temp[100] ;

    printf("Before swappong\n");
    printf("str1=%s\n",str1);
    printf("str2=%s\n",str2);

    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);


    printf("\n\n\nAfter swappong\n");
    printf("str1=%s\n",str1);
    printf("str2=%s\n",str2);






    getch();
}
