 #include<stdio.h>
 int main()
 {
     FILE*file;
     char ch;
     file=fopen("test.txt","r");
     if(file==NULL)
     {
         printf("File does not exsit");
     }
     else
     {
         printf("File is opend");
         while(!feof(file))
         {
             ch=fgetc(file);
             printf("%c",ch);
         }

         fclose(file);
     }

     getch();
 }
