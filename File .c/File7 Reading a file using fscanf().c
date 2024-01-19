#include<stdio.h>
int main()
{
    FILE*file;
    char name[20];
    file=fopen("test.txt","r");

    if(file==NULL)
    {
        printf("File does not exist\n");
    }
    else
    {
        printf("file is opened\n");
        fscanf(file,"%s",&name);
        printf("%s%s",name);


        fclose(file);
    }





    getch();
}
