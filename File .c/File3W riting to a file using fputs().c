#include<stdio.h>
int main()
{
    FILE *file;
    char name[20];
    file = fopen("test.txt","w");

    if(file==NULL)
    {
        printf("File does not exsist");
    }
    else
    {
        printf("File is opened \n");
        printf("Entar your full name: ");
        gets(name);

        fputs(name,file);
        fputs("\n",file);
        printf("File is witting saccessfulli\n");

        fclose(file);

    }



    getch();
}
