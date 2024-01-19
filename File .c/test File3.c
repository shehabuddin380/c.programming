#include<stdio.h>
int main()
{
    FILE *file;
    char name[30];
    file=fopen("test.txt","w");

    if(file==NULL)
    {
        printf("File dest not Exsist");
    }
    else
    {
        printf("File is opened\n");
        printf("Entar your full name: ");
        gets(name);

        fputc(name,file);
        printf("File is Wrtting saccessfully\n");
        fclose(file);
    }



    getch();
}
