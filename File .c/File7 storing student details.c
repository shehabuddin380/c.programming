#include<stdio.h>
int main()
{
    FILE*file;
    char name[30];
    int age,phonenumber,i,num;

    file=fopen("student.txt","a");

    if(file==NULL)
    {

        printf("File does not exist");
    }
    else
    {
        printf("File is opened\n");
        printf("Enter student number: ");
        scanf("%d",&num);

        for(i=0;i<=num;i++)
        {
            printf("Enter student name: ");
            scanf("%s",&name);

            printf("Eter student age: ");
            scanf("%d",&age);

            printf("Eter student phonenumber: ");
            scanf("%d",&phonenumber);


            fprintf(file,"\n%s\t\t%d\t%d\n",name,age,phonenumber);
        }

        fclose(file);
    }



    getch();
}
