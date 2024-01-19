/*#include <stdio.h>
int string_langht(char str[])
{
    int i,langth=0;
    for(i=0;str[i]!='\0';i++)
    {
        langth++;
    }
    return langth;
}
int main()
{
    char country[100];
    int langht;
    while(1 == scanf("%s",country))
    {
        langht=string_langht(country);
        printf("langht=%d\n",langht);
    }

    getch();
}*/
#include <stdio.h>
 int string_length(char str[])
 {
     int i, length = 0;
     for(i = 0; str[i] != '\0'; i++) {
         length++;
     }
     return length;
 }
 int main()
 {
     char country[100];
     int length;
     while(1 == scanf("%s", country)) {
         length = string_length(country);
         printf("length: %d\n", length);
     }
     return 0;
 }
