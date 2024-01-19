#include<stdio.h>
int main()
{
    FILE*file;
    char name[20];
    int age;

    file=fopen("test.txt","r");
    if(file=NULL)
    {
        printf("File does not exsit");
    }
    else
    {
      printf("file is opend\n");

      printf("Enter your name: ");
      gets(name);

      printf("Enter your age: ");
      scanf("%d",&age);

      fprintf(file,"name=%s, age= %d\n",name,age);

      fputs(name,file);
      fputs("\n",file);
      printf("file is writing saccessfulli");
      fclose(file);
    }

    getch();
}
