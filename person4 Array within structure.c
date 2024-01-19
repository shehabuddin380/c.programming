#include<stdio.h>
struct Person
{
    char name[100];
    int age;
    float salary;
};
int main()
{
    struct Person person[4];
    int i;
    for(i=0;i<4;i++)
    {
        printf("\nEnatar impormation for person \n",i+1);
        printf ("Entar name: ");
        fflush(stdin);
        gets(person[i].name);

        printf ("Entar age: ");
        scanf("%d",&person[i].age);
        printf ("Entar salary: ");
        scanf("%f",&person[i].salary);
    }
    for(i=0;i<4;i++)
    {
        printf("\nImpormation for person%d \n",i+1);
        printf("name: %s\n",person[i].name);
        printf ("Age: %d\n",person[i].age);
        printf ("salary: %f\n",person[i].salary);
    }



    getch();
}

