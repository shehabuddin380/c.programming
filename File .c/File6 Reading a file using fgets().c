#include<stdio.h>
int main()
{
    FILE*file;
    char ch[50];
    file=fopen("test.txt","r");

    if(file==NULL)
    {
        printf("File does not exist\n");
    }
    else
    {
        printf("File is opend\n");
        while(!feof(file))
        {
            fgets(ch,50,file);
            printf("%s\n",ch);
        }


        fclose(file);
    }




    getch();
}
