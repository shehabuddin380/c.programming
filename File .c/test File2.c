#include<stdio.h>
int main()
{
    FILE *file;
    char nume[30]=" Shihab Ahmed";
    int length=strlen(nume);
    int i;

    file =fopen("test.txt","r");

    if(file==NULL)
    {
        printf("File doesno't exist");
    }
    else
    {
       printf("File is opened\n");
        for(i=0;i<length;i++)
        {
            fputc(nume[i],file);

        }
         printf("File is writarn saccesfully\n");
        fclose(file);
    }


    getch();
}

