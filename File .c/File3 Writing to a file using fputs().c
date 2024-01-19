#include<stdio.h>
int main()
{
    FILE *file;
    char name[30];
    file=fopen("test.txt","w");

    if(file==NULL)
    {
        printf("File doesno't exist");
    }
    else
    {
        printf("File is open\n");
        printf("Enter your full name: ");
        gets(name);

        fputc(name,file);
        printf("File is saccessfully");
        fclose(file);
    }



    getch();
}
