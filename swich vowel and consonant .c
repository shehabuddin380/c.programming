#include<stdio.h>
int main()
{
   char ch ;
   printf("entar a number: ");
   scanf("%c",&ch);
   switch (ch)
   {
   case 'a':
   case 'e':
   case 'i':
   case 'o':
   case 'u':
   case 'A':
   case 'E':
   case 'I':
   case 'O':
   case 'U':
    printf("vowel\n");
    break;

    defaulf :
        printf("consonant\n");
        break;

   }


    getch();
}
